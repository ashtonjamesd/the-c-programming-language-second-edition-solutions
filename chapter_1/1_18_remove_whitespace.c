#include <stdio.h>

#define MAX_LINE 80

int get_line(char line[]);
void remove_whitespace(char line[], int len);

int main() {
  char line[MAX_LINE];

  while (1) {
    int len = get_line(line);
    if (len == 0) continue;

    remove_whitespace(line, len);

    printf("Line: '%s'\n", line);
  }

  return 0;
}

void remove_whitespace(char line[], int len) {
  int start = 0;
  int end = len - 1;

  while (start < end && (line[start] == ' ' || line[start] == '\t')) {
    start++;
  }

  while (end >= start && (line[end] == ' ' || line[end] == '\t')) {
    end--;
  }

  int new_len = end - start + 1;
  for (int i = 0; i < new_len; i++) {
    line[i] = line[start + i];
  }
  line[new_len] = '\0';
}

int get_line(char line[]) {
  int c, i = 0;
  while ((c = getchar()) != EOF && c != '\n' && i < MAX_LINE) {
    line[i++] = c;
  }

  line[i] = '\0';
  return i;
}