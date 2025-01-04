#include <stdio.h>
typedef enum { ZERO, ONE, TWO } Example;
typedef enum { ANOTHER, EXAMPLE, WITH, ENUMS } Again;

int main(void) {
  printf("Enum example: %d %d %d\n", ZERO, ONE, TWO);
  printf("Enum example: %d %d %d %d\n", WITH, ENUMS, EXAMPLE, ANOTHER);
}
