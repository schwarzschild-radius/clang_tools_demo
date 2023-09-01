// clang-tidy -checks=* divby0.cpp

int function(int b) {
  int a, c;
  switch (b) {
  case 1:
    a = b / 0;
    break;
  case 4:
    c = b - 4;
    a = b / c;
    break;
  }
  return a;
}