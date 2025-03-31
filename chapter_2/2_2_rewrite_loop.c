#include <stdio.h>

int main() {
  int c, i, lim;
  char s[1];
  
  for (i = 0; i < lim - 1; ++i) {
    if ((c = getchar()) == '\n') break;
    if (c == EOF) break;

    s[i] = c;
  }

  return 0;
}