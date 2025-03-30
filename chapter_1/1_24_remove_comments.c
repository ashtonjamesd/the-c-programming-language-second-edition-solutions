#include <stdio.h>

#define MAX_INPUT 100

int main() {
  int curr = 0;
  int inside_string = 0;

  char input[MAX_INPUT] = "char *x = \"\"\n// x = \"\"\nx = \"//\"\n/* test\n test*/";

  printf("%s\n\n", input);

  while (input[curr] != '\0') {
    if (input[curr] == '\"') {
      inside_string = 1 - inside_string;
    }

    if (!inside_string && input[curr] == '/' && input[curr + 1] == '/') {
      while (input[curr] != '\n' && input[curr] != '\0') {
        input[curr] = ' ';
        curr++;
      }
    }

    if (!inside_string && input[curr] == '/' && input[curr + 1] == '*') {
      while (input[curr] != '*' || input[curr + 1] != '/') {
        input[curr] = ' ';
        curr++;
      }
      input[curr] = ' ';
      input[curr + 1] = ' ';
      curr += 2; 
    }

    curr++;
  }

  printf(input);

  return 0;
}