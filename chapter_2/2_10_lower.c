#include <stdio.h>

char *new_lower(char *str) {
    for (char *p = str; *p; p++) {
        *p >= 'A' && *p <= 'Z' ? *p += 'a' - 'A' : *p;
    }
    return str;
}

int main() {
    char str[] = "Hello, World! 123";
    printf("str: '%s'", new_lower(str));
    
    return 0;
}
