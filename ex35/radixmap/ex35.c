#include <stdio.h>

typedef enum {
  TYPE_INT,
  TYPE_FLOAT,
  TYPE_STRING,

} VariantType;

struct Variant {
  VariantType type;
  union {
    int as_integer;
    float as_float;
    char *as_string;
  } data;

};

typedef struct Variant Variant;

void Variant_print(Variant * var)
{
  switch (var->)
}
