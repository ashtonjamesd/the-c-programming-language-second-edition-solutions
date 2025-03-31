#include <stdio.h>

unsigned getbits(unsigned x, int p, int n) {
    return (x >> (p + 1 - n) & ~(~0 << n));
}

unsigned setbits(unsigned x, int p, int n, int y) {
    return (x );
}

int main() {
    printf("%d", getbits(0b1010, 4, 3));

    setbits(1, 2, 3, 4);

    return 0;
}