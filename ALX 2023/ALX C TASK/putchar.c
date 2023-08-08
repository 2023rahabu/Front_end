#include <stdio.h>
int main() {
    char string[] = "Hello World";
    int i;

    for (i = 0; string[i] != '\0'; i++) {
        putchar(string[i]);
    }

    return 0;
}
