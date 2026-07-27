#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int f() {
    return 3;
}

const char* foo() {
    char *buf = malloc(f());
    strcpy(buf, "foo");
    printf("%s\n", buf);
    return buf;
}

int main() {
    const char *s = foo();
    printf("%s\n", s);
    free((void*) s);
    return 0;
}
