#include "minunit.h"
#include <hashmap.h>
#include <assert.h>
#include <bstrlib.h>

Hashmap *map = NULL;
static int traverse_called = 0;

struct tagbstring test1 = bsStatic("test data 1");

