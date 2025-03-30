#include <stdio.h>

int htoi(char *hex) {
  int i = 0;

  if (hex[0] == '0') {
    if (hex[1] == 'x' || hex[1] == 'X') {
      i = 2;
    }
  }

  int total = 0;
  for (; i < hex[i] != '\0'; i++) {
    char c = hex[i];
    int val;

    if (c >= '0' && c <= '9') {
      val = c - '0';
    }
    else if (c >= 'a' && c <= 'z') {
      val = c - 'a' + 10;
    }
    else if (c >= 'A' && c <= 'Z') {
      val = c - 'A' + 10;
    }
    else break;

    total = total * 16 + val;
  }

  return total;
}

int main() {
  printf("%d", htoi("0XFFFFF"));
  return 0;
}