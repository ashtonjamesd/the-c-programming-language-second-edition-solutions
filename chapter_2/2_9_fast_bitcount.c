#include <stdio.h>

int fast_bitcount(unsigned x) {
    int b = 0;
    while (x) {
        x &= (x - 1);
        b++;
    }

    return b;
}

int main() {
    printf("%d\n", fast_bitcount(0b1111001111001111));
    return 0;
}