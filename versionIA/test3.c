#include <stdio.h>

int* foo(int a) {
    int* b = &a;
    return b;
}

int main() {
    int *ptr = foo(11);
    printf("%d\n", *ptr);
    return 0;
}
