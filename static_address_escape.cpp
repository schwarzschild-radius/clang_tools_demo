// scan-build clang++ --analyze static_address_escape.cpp

#include <cstdio>
char const *p;

void test() {
  char const str[] = "string";
  p = str; // warn
}

int main() {
  test();
  printf("%s\n", p);
}