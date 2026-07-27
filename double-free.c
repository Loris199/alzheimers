#include <stdlib.h>
#include <string.h>

int main() {
    char *foo = malloc(10);
    strcpy(foo, "foo");
    free(foo);

    char *bar = malloc(10);
    strcpy(bar, "bar");

    free(foo);

    return 0;
}
