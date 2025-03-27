#include <stdio.h>

int main() {
    int c, last_c;

    while ((c = getchar()) != EOF) {
        if (last_c == ' ' && c == ' ') continue;
        putchar(last_c = c);
    }

    return 0;
}