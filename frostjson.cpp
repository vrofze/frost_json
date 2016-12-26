#include "frostjson.h"

#include <assert.h>  // assert()
#include <stdlib.h>  // NULL

#define EXPECT(c, ch) do { assert(*c->json == (ch)); c->json++; } while(0)

//! constext
typedef struct
{
    const char* json;
} frost_context;

//! 处理空格
static void frost_parse_whitespace(frost_context *c)
{
    const char *p = c->json;
    while(*p == ' ' || *p == '\t' || *p =='\n' || *p =='\r')
        ++p;
    c->json = p;
}

//! 处理null类型
static int frost_parse_null(frost_context *c, frost_value *v)
{
    EXPECT(c, 'n');
    if(c->json[0] != 'u' || c->json[1] != 'l' || c->json[2] != 'l')
        return FROST_PARSE_INVALID_VALUE;
    c->json += 3;
    v->type = FROST_NULL;
    return FROST_PARSE_OK;
}

//! 按字符串首字母将字符串分发给不同处理函数处理
static int frost_parse_value(frost_context *c, frost_value *v)
{
    switch(*c->json){
    case 'n': return frost_parse_null(c, v);
    case '\0': return FROST_PARSE_EXPECT_VALUE;
    default: return FROST_PARSE_INVALID_VALUE;
    }
}

//! 处理入口 并处理: JSON-text = ws value ws
int frost_parse(frost_value *v, const char *json)
{
    frost_context c;
    assert(v != NULL); // assert v can't be NULL
    c.json = json;
    v->type = FROST_NULL; // begin parse set type to NULL
    frost_parse_whitespace(&c);
    return frost_parse_value(&c, v);
}

frost_type frost_get_type(const frost_value *v)
{
    assert(v != NULL);
    return v->type;
}
