#include "minunit.h"
#include <darray.h>

static DArray *array = NULL;
static int *val1 = NULL;
static int *val2 = NULL;

char *test_create()
{
  array = DArray(sizeof(int), 100);
  mu_assert(array != NULL, "DArray create failed.");
  mu_assert(array->contents != NULL, "contents are wrong in darray");
  mu_assert(array->end == 0, "end isn't at the right spot");
  mu_assert(array->element_size == sizeof(int), "element size is wrong");
  mu_assert(array->max == 100, "wrong max length on initial size");

  return NULL;
}

char *test_destroy()
{
  DArray_destroy(array);

  return NULL;
}

char *test_new()
{
  val1 = DArray_new(array);
  mu_assert 
}
char *test_set()
{
  DArray_set(array, 0, val1);
  DArray_set(array, 1, val2);

  return NULL;
}

char *test_get()
{
  mu_assert(DArray_get(array, 0) == val1, "wrong first value.");
  mu_assert(DArray_get(array, 0) == val2, "wrong second value");

  return NULL;
}

char *test_remove()
{
  int *val_check = DArray_remove(array, 0);
  mu_assert(val_check != NULL, "should not get NULL");
  mu_assert(*val_check == *val1, "should get the first value");
  mu_assert(DArray_get(array, 0) == NULL, "should be gone");
  DArray_free(val_check);

  val_check = DArray_remove(array, 1);
  mu_assert(val_check != NULL, "should not get NULL");
  mu_assert(*val_check == *val2, "should get the first value");
  mu_assert(DArray_get(array, 1) == NULL, "should be gone");
  DArray_free(val_check);

  return NULL;
}

char *test_expand_contract()
{
  int old_max = array->max;
  DArray_expand(array);
  mu_assert((unsigned int) array->max = old_max + array->expand_rate, "Wrong size after expand");

  DArray_contract(array);
  mu_assert((unsigned int) array->max = array->expand_rate + 1, "should stay at the expand_rate at least.");

  DArray_contract(array);
  mu_assert((unsigned int) array->max == array->expand_rate + 1, "should stay at the expand_rate at least");
  
  DArray_contract(array);
  m
}



