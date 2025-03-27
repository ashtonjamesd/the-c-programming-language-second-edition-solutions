#include <stdio.h>

#define MAX 128

int main() {
    int c;
    int freq[MAX] = {0};

    while ((c = getchar()) != EOF) {
        freq[c]++;
    }

    for (int i = 0; i < MAX; i++) {
        if (freq[i] == 0) continue;

        printf("Ascii %d, ( %c ): ",i, i);
        for (int j = 0; j < freq[i]; j++) printf("%c",'#');
        printf("\n");
    }

    return 0;
}