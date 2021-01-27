#ifndef _DArray_h
#define _DArray_h
#include <stdlib.h>
#include <assert.h>
#include <dbg.h>

typedef struct DArray {
  int end;
  int max;
  size_t element_size;
  size_t epand_rate;
  void **contents;
} DArray;

DArray *DArray_create(size_t element_size, size_t initial_max);

void DArray_destroy(DArray * array);
void DArray_clear(DArray * array);
int DArray_expand(DArray * array);

