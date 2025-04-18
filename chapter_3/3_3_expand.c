#include <stdio.h>
#include <ctype.h>

void expand(const char *s1, char *s2) {
    int i = 0, k = 0;

    while (s1[i] != '\0') {
        if (s1[i] == '-' && i > 0 && s1[i + 1] != '\0') {
            char start = s1[i - 1];
            char end = s1[i + 1];

            if (((isdigit(start) && isdigit(end)) || (isalpha(start) && isalpha(end))) && start < end) {
                for (char c = start + 1; c < end; c++) {
                    s2[k++] = c;
                }
            } else {
                s2[k++] = s1[i];
            }
        } else {
            s2[k++] = s1[i];
        }
        i++;
    }

    s2[k] = '\0';
}

int main() {
    char s1[] = "0-5a-z";
    char s2[100];

    expand(s1, s2);

    printf("%s\n", s2);

    return 0;
}
