#include <stdio.h>

#define MAX_LINE 100
#define TARGET 80

int get_line(char line[]);

int main() {
    int len;
    char line[MAX_LINE];

    while ((len = get_line(line)) > 0) {
        if (len > TARGET) {
            printf(line);
        }
    }

    return 0;
}

int get_line(char line[]) {
    int c, i;
    for (i = 0; i < MAX_LINE && ((c = getchar()) != EOF && c != '\n'); i++) {
        line[i] = c;
    }

    line[i] = '\0';
    return i;
}