#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "frostjson.h"

static int main_ret = 0;
static int test_count = 0;
static int test_pass = 0;

#define EXPECT_EQ_BASE(equality, expect, actual, format)                \
    do {                                                                \
        test_count++;                                                   \
        if(equality)                                                    \
            test_pass++;                                                \
        else {                                                          \
            fprintf(stderr, "%s:%d: expect: " format "actual: " format "\n", __FILE__, __LINE__, expect, actual); \
            main_ret = 1;                                               \
        }                                                               \
    } while(0)

#define EXPECT_EQ_INT(expect, actual) EXPECT_EQ_BASE((expect) == (actual), expect, actual, "%d")

static void test_parse_null()
{
    frost_value v;

    v.type = FROST_TRUE;
    EXPECT_EQ_INT(FROST_PARSE_OK, frost_parse(&v, "null"));
    EXPECT_EQ_INT(FROST_NULL, frost_get_type(&v));
}

static void test_parse_expect_value()
{
    frost_value v;

    v.type = FROST_FALSE;
    EXPECT_EQ_INT(FROST_PARSE_EXPECT_VALUE, frost_parse(&v, ""));
    EXPECT_EQ_INT(FROST_NULL, frost_get_type(&v));

    v.type = FROST_FALSE;
    EXPECT_EQ_INT(FROST_PARSE_EXPECT_VALUE, frost_parse(&v, " "));
    EXPECT_EQ_INT(FROST_NULL, frost_get_type(&v));
}

static void test_parse_invalid_value()
{
    frost_value v;

    v.type = FROST_FALSE;
    EXPECT_EQ_INT(FROST_PARSE_INVALID_VALUE, frost_parse(&v, "nul"));
    EXPECT_EQ_INT(FROST_NULL, frost_get_type(&v));

    v.type = FROST_FALSE;
    EXPECT_EQ_INT(FROST_PARSE_INVALID_VALUE, frost_parse(&v, "?"));
    EXPECT_EQ_INT(FROST_NULL, frost_get_type(&v));
}

static void test_parse_ture()
{
    frost_value v;
    v.type = FROST_NULL;
    EXPECT_EQ_INT(FROST_PARSE_OK, frost_parse(&v, "true"));
    EXPECT_EQ_INT(FROST_TRUE, frost_get_type(&v));
}

static void test_parse_false()
{
    frost_value v;
    v.type = FROST_NULL;
    EXPECT_EQ_INT(FROST_PARSE_OK, frost_parse(&v, "false"));
    EXPECT_EQ_INT(FROST_FALSE, frost_get_type(&v));
}

static void test_parse()
{
    test_parse_null();
    test_parse_invalid_value();
    test_parse_expect_value();
    test_parse_ture();
    test_parse_false();
}

int main()
{
    test_parse();
    printf("%d/%d (%3.2f%%) passed\n",
           test_pass, test_count, test_pass * 100.0 / test_count);
}
