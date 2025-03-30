#include <stdio.h>

#define MAX 400

int main() {
    char program[MAX] = 
        "int main() {\n"
        "  int x = (2 + 2);\n"
        "  char *x = \"Hello, ( World!\"\n"
        "  // \" ( { ] // /\n"
        "  return 0;\n"
        "}";

    int curr = 0;

    int paren_count = 0;
    int brace_count = 0;
    int square_bracket_count = 0;

    int in_string = 0;
    int in_comment = 0;

    while (program[curr] != '\0') {
        if (!in_string) {
            if (program[curr] == '/' && program[curr + 1] == '/') {
                in_comment = 1;
            } else if (program[curr] == '/' && program[curr + 1] == '*') {
                in_comment = 2;
            }
        }

        if (in_comment == 1) {
            if (program[curr] == '\n') {
                in_comment = 0;
            }
        }
        else if (in_comment == 2) {
            if (program[curr] == '*' && program[curr + 1] == '/') {
                in_comment = 0;
            }
        }

        if (!in_comment && program[curr] == '\"' && (curr == 0 || program[curr - 1] != '\\')) {
            in_string = !in_string;
        }

        if (in_string || in_comment) {
            curr++;
            continue;
        }

        if (program[curr] == '(') {
            paren_count++;
        } else if (program[curr] == ')') {
            paren_count--;
        }

        if (program[curr] == '{') {
            brace_count++;
        } else if (program[curr] == '}') {
            brace_count--;
        }

        if (program[curr] == '[') {
            square_bracket_count++;
        } else if (program[curr] == ']') {
            square_bracket_count--;
        }

        curr++;
    }

    if (paren_count != 0) {
        printf("program contains unmatched '()'.\n");
    }

    if (brace_count != 0) {
        printf("program contains unmatched '{}'.\n");
    }

    if (square_bracket_count != 0) {
        printf("program contains unmatched '[]'.\n");
    }

    if (in_string != 0) {
        printf("unterminated double quote.\n");
    }

    return 0;
}
