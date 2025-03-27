#include <stdio.h>

int main() {
    printf("char was: %s", getchar() == EOF ? "Eof" : "Not Eof");
}