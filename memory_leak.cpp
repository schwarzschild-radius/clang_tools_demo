// clang-tidy -checks=* memory_leak.cpp

int main() {
    int *a = new int[10];
    return a[100];
}