#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char* foo() {
    char *buf = malloc(10);
    strcpy(buf, "foo");
    printf("%s\n", buf);
    return buf;
}

int main() {
    const char *s = foo();
    free((void*) s);
    printf("%s\n", s);
    return 0;
}
