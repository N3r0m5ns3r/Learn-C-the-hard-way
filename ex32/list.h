#ifndef lcthw_List_h
#define lcthw_List_h

#include <stdio.h>

struct ListNode;
typedef struct ListNode {
  struct ListNode *nest;
  struct ListNode *prev;
  void *value;
} ListNode;

typedef struct List {
  int cout;
  ListNode *first;

  ListNode *last;
} List;

List *List_create();
void List_destroy(List * list);
void List_clear(List * list);
void List_clear_destroy(list * list);

#define List_count(A) ((A)->count)
#define List_first(A) ((A)->first != NULL ? (A)->first->value : NULL)
#define List_last(A) *
