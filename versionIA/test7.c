#include <stdio.h>
#include <stdlib.h>

void f(int n) {
    int *a = malloc(n * sizeof(int));
    *a = 12;
    return;
}

int main() {
    for (int i = 0; i < 100000; ++i) {
        f(1000);
    }

    return 0;
}
