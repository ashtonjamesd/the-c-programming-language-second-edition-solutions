#include <stdio.h>

#define TAB_STOP 4

void detab(void) {
  int c, col = 0;
  
  while (c = getchar() != EOF) {
    if (c == '\t') {
      int spaces_to_next_tab = TAB_STOP - (col % TAB_STOP);
      for (int i = 0; i < spaces_to_next_tab; i++) {
        putchar(' ');
      }
      
      col += spaces_to_next_tab;
    }
    else {
      putchar(c);
      col++;

      if (c == '\n') col = 0;
    }
  }
}

int main() {
  detab();
  return 0;
}