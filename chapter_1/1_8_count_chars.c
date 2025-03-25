#include <stdio.h>

int main() {
    int tab_count = 0;
    int blank_count = 0;
    int newline_count = 0;

    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\t')
            tab_count++;
        else if (c == ' ')
            blank_count++;
        else if (c == '\n')
            newline_count++;
    }

    printf("\nTabs: %d", tab_count);
    printf("\nBlanks: %d", blank_count);
    printf("\nNew Lines: %d", newline_count);

    return 0;
}