#include <stdio.h>

#define MAX_LENGTH 10
#define IN_WORD 1
#define OUT_WORD 0

int main() {

  int c;
  int lengths[MAX_LENGTH];
  int curr_len;
  int is_word = OUT_WORD;

  for (int i = 0; i < MAX_LENGTH; i++)
    lengths[i] = 0;

  while ((c = getchar()) != EOF) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
      is_word = IN_WORD;
      curr_len++;
    } else {
      if (is_word == IN_WORD) {
        lengths[curr_len - 1]++;
      }

      curr_len = 0;
      is_word = OUT_WORD;
    }
  }

  printf("\nHorizontal Histogram\n");
  for (int i = 0; i < MAX_LENGTH; i++) {
    printf("%d:", i + 1);

    for (int j = 0; j < lengths[i]; j++) {
      printf("#");
    }
    printf("\n");
  }

  printf("\nVertical Histogram\n");
  int max_words = 0;
  for (int i = 0; i < MAX_LENGTH; i++) {
    if (lengths[i] > max_words)
      max_words = lengths[i];
  }

  for (int i = 0; i < max_words; i++) {
    printf("%d ", max_words - i);

    for (int j = 0; j < MAX_LENGTH; j++) {
      if (lengths[j] >= max_words - i) {
        printf("# ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  printf("  ");
  for (int i = 0; i < MAX_LENGTH; i++) {
    printf("%d ", i + 1);
  }
}