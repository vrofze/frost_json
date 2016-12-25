#ifndef FROSTJSON_H__
#define FROSTJSON_H__

//! json value type
typedef enum {
    FROST_NULL,
    FROST_FALSE,
    FROST_TRUE,
    FROST_NUMBER,
    FROST_STRING,
    FROST_ARRAY,
    FROST_OBJECT
} frost_type;

//! error type
enum {
    //! success
    FROST_PARSE_OK = 0,
    //! json object was empty
    FROST_PARSE_EXPECT_VALUE,
    //! value was not in frost_type
    FROST_PARSE_INVALID_VALUE,
    //! exist char after whitespace
    FROST_PARSE_ROOT_NOT_SINGULAR
};

//! json object type
typedef struct {
    frost_type type;
} frost_value;

//! parse json
int frost_parse(frost_value* v, const char* json);

//! get type from json object
frost_type frost_get_type(const frost_value* v);

#endif  // FROSTJSON_H__
