// clang-tidy -checks=performance-inefficient-vector-operation perf_vector_op.cpp
// clang-tidy -checks=performance-inefficient-vector-operation perf_vector_op.cpp -fix # to fix the issue

#include <vector>

int main(int argc, char *argv[]) {
  int n = argc;
  std::vector<int> v;
  for (int i = 0; i < n; ++i) {
    v.push_back(n);
    // This will trigger the warning since the push_back may cause multiple
    // memory reallocations in v. This can be avoid by inserting a
    // 'reserve(n)' statement before the for statement.
  }
}