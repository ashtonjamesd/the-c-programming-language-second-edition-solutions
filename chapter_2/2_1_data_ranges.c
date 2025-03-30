#include <stdio.h>
#include <limits.h>

int main() {
  printf("\nData Type Ranges:\n\n");

  printf("char: ");
  printf("%d to %d\n", CHAR_MIN, CHAR_MAX);

  printf("unsigned char: ");
  printf("0 to %d\n", UCHAR_MAX);

  printf("int: ");
  printf("%d to %d\n", INT_MIN, INT_MAX);
  
  printf("unsigned int: ");
  printf("0 to %u\n", UINT_MAX);

  printf("short: ");
  printf("%d to %d\n", SHRT_MIN, SHRT_MAX);
  
  printf("unsigned short: ");
  printf("0 to %u\n", USHRT_MAX);

  printf("long: ");
  printf("%ld to %ld\n", LONG_MIN, LONG_MAX);
  
  printf("unsigned long: ");
  printf("0 to %ul\n", ULONG_MAX);


  printf("\nComputed Values:\n\n");
  
  printf("char: ");
  printf("%d to %d\n", -(1 << (sizeof(char) * 8) - 1), (1 << sizeof(char) * 8 - 1) - 1);

  printf("unsigned char: ");
  printf("0 to %d\n", (1 << sizeof(unsigned char) * 8) - 1);

  printf("int: ");
  printf("%d to %d\n", -(1 << (sizeof(int) * 8) - 1), (1 << sizeof(int) * 8 - 1) - 1);

  printf("unsigned int: ");
  printf("0 to %u\n", (1 << sizeof(int) * 8) - 1);

  printf("short: ");
  printf("%d to %d\n", -(1 << sizeof(short) * 8 - 1), (1 << sizeof(short) * 8 - 1) - 1);
  
  printf("unsigned short: ");
  printf("0 to %u\n", (1 << sizeof(short) * 8) - 1);

  printf("long: ");
  printf("%ld to %ld\n", -(1L << (8 * sizeof(long) - 1)), (1L << (8 * sizeof(long) - 1)) - 1);

  printf("unsigned long: ");
  printf("0 to %ul\n", (1 << sizeof(unsigned long) * 8) - 1);

  return 0;
}