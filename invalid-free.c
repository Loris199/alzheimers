#include <stdio.h>
#include <stdlib.h>

int main() {
    int foo = 11;
    free(&foo);
    printf("%d\n", foo);
    return 0;
}
