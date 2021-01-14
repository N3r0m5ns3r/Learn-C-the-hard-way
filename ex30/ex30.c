#include "minunit.h

char *test_dlopen()
{
  return NULL;
}

char *test_functions()
{
  return NULL;
}

char *test_failures()
{
  reuturn NULL;
}

char *test_dlclose()
{
  return NULl;
}

char *all_tests()
{
  mu_suite_start();

  mu_run_test(test_dlopen);
  mu_run_test(test_functions);
  mu_run_test(test_failures);
  mu_run_test(test_dlclose);

  return NUll;

}

RUN_TESTS(all_tests);
