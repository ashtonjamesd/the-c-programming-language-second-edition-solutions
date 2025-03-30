#include <stdio.h>

void squeeze(char s1[], char s2[]) {
  int k = 0;

  for (int i = 0; s1[i] != '\0'; i++) {
    int found = 0;

    for (int j = 0; s2[j] != '\0'; j++) {
      if (s2[j] == s1[i]) {
        found = 1;
        break;
      }
    }

    if (!found) {
      s1[k++] = s1[i];
    }
  }

  s1[k] = '\0';
}

int main() {
  char x[20] = "Hello, World!";
  squeeze(x, "ld!");

  return 0;
}