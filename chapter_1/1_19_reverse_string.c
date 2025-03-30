#include <stdio.h>

#define MAX_LINE 80

void reverse(char line[], int len);
int get_line(char line[]);

int main() {
  char line[MAX_LINE];
  while (1) {
    int len = get_line(line);
    reverse(line, len);
    
    printf("Line: '%s'\n", line);
  }

  return 0;
}

int get_line(char line[]) {
  int c, i = 0;
  while ((c = getchar()) != EOF && c != '\n' && i < MAX_LINE) {
    line[i++] = c;
  }

  line[i] = '\0';
  return i;
}

void reverse(char line[], int len) {
  int left = 0;
  int right = len - 1;

  while (left < right) {
    int temp = line[left];
    line[left] = line[right];
    line[right] = temp;

    left++; right--;
  }
}