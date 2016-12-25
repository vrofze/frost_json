#include "frostjson.h"

#include <assert.h>  // assert()
#include <stdlib.h>  // NULL

#define EXPECT(c, ch) do { assert(*c->json == (ch)); c->json++; } while(0)

//! constext
typedef struct
{
    const char* json;
} frost_context;

static void frost_parse_whitespace(frost_context* c)
{
    const char *p = c->json;
    while(*p == ' ' || *p == '\t' || *p =='\n' || *p =='\r')
        ++p;
    c->json = p;
}

static int frost_parse_null(frost_context* c, frost_value* v)
{
    EXPECT(c, 'n');
    if(c->json[0] != 'u' || c->json[1] != 'l' || c->json[2] != 'l')
        return FROST_PARSE_INVALID_VALUE;
    c->json += 3;
    v->type = FROST_NULL;
    return FROST_PARSE_OK;
}

static int frost_parse_value(frost_context* c, frost_value* v)
{
    switch(*c->json){
    case 'n': return frost_parse_null(c, v);
    case '\0': return FROST_PARSE_EXPECT_VALUE;
    default: return FROST_PARSE_INVALID_VALUE;
    }
}

frost_type frost_get_type(const frost_value* v)
{
    assert(v != NULL);
    return v->type;
}
