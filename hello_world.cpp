// clang-tidy -checks=* hello_world.cpp
#include <cstdio>

int main(){
    char hello_world[] = {
        'H', 'e', 'l', 'l', 'o', ',' , ' ', 'W', 'o', 'r', 'l', 'd'
    };
    char c[] = {'b'};

    printf("%s\n", (const char*)hello_world);
}