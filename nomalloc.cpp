// clang-tidy -checks=cppcoreguidelines-no-malloc nomalloc.cpp

#include <algorithm>
#include <cstdlib>
#include <numeric>

int main() {
  std::unique_ptr<int[]> a = (int *)malloc(sizeof(int) * 10);
  std::vector<int> a(10);
  int sum = std::accumulate(a.begin(), a.end() + 10, 0);
  // free(a);
  return sum;
}