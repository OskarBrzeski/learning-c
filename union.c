#include <stdio.h>

typedef union {
  int first;
  float second;
  char third;
} Example;

int main(void) {
  Example one = {.second = 24.5};
  printf("%d %f \n", one.first, 16.0);
}
