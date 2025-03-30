#include <stdio.h>
#include <ctype.h>

#define MAX_LINE 80
#define FOLD_LIMIT 8

int get_line(char line[]);
void fold_line(char line[], int len);

int main() {
  char line[MAX_LINE];

  while (1) {
    int len = get_line(line);

    if (len > FOLD_LIMIT) {
      fold_line(line, len);
    } else {
      printf("Line: '%s'\n", line);
    }
  }

  return 0;
}

void fold_line(char line[], int len) {
  int start = 0;  

  while (start < len) {
    int fold_point = start + FOLD_LIMIT;

    if (fold_point < len) {
      while (fold_point > start && !isspace(line[fold_point])) {
        fold_point--;
      }
    }

    if (fold_point == start) {
      fold_point = start + FOLD_LIMIT;
    }

    for (int i = start; i < fold_point; i++) {
      putchar(line[i]);
    }
    putchar('\n');
    
    start = fold_point;

    while (isspace(line[start]) && start < len) {
      start++;
    }
  }
}

int get_line(char line[]) {
  int c, i = 0;
  while ((c = getchar()) != EOF && c != '\n' && i < MAX_LINE) {
    line[i++] = c;
  }

  line[i] = '\0';
  return i;
}