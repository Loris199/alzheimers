#include <stdio.h>
#include <stdlib.h>

void leak(int n) {
    // Allocates memory that is never freed
    int *a = malloc(n * sizeof(int));
    *a = 12;
    return;
}

int main() {
    // Program will keep around useless 400MiB of 
    // memory allocated until it is terminated
    for (int i = 0; i < 100000; ++i) {
        leak(1000);
    }

    return 0;
}
