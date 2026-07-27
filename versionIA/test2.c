#include <stdio.h>
#include <string.h>

int f() {
    return 3;
}

int main(int argc, char *argv[]) {
    char buf[f()];
    strcpy(buf, "foo");
    printf("%s\n", buf);
    return 0;
}
