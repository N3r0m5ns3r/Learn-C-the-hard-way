#undef NDEBUG
#include <stdint.h>
#include <hashmap.h>
#include <dbg.h>
#include <bstrlib.h>

static int default_compare(void *a, void *b)
{
  return bstrcmp((bstring) a, (bstring) b);

}

/**
 * Simple bob jenkin's hash algo taken from the wiki description
 */

static uint32_t default_hash(void *a)
{
  size_t len = blength((bstring) a);
  char *key = bdata((bstring) a);
  uint32_t hash = 0;
  uint32_t i = 0;

  for (hashj)
}
