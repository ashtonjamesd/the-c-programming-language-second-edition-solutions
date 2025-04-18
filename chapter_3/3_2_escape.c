#include <stdio.h>

void escape(char *t, char *s) {
    int j = 0;

    for (int i = 0; t[i] != '\0'; i++) {
        switch (t[i]) {
            case '\n':
                s[j++] = '\\';
                s[j++] = 'n';
                break;
            case '\t':
                s[j++] = '\\';
                s[j++] = 't';
                break;
            default:
                s[j++] = t[i];
        }
    }

    s[j] = '\0';
}

void escape_reverse(char *t, char *s) {
    int j = 0;

    for (int i = 0; t[i] != '\0'; i++) {
        switch (t[i]) {
            case '\\':
                if (t[i + 1] == 'n') {
                    i++;
                    s[j++] = '\n';
                }
                else if (t[i + 1] == 't') {
                    i++;
                    s[j++] = '\t';
                }
                break;

            default:
                s[j++] = t[i];
        }
    }

    s[j] = '\0';
}

int main() {
    char t[22] = "a\\n\\na\\tacqa";
    char s[40];

    escape_reverse(t, s);

    printf("%s\n", s);

    return 0;
}