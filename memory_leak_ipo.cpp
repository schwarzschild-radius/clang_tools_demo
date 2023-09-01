// scan-build clang++ --analyze memory_leak_ipo.cpp

#include <stdlib.h>

int process(void *ptr, int cond) {
  if (cond)
    free(ptr);
}

int entry(size_t sz, int cond) {
  void *ptr = malloc(sz);
  if (ptr)
    process(ptr, cond);

  return 0;
}