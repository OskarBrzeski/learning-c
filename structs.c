#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

typedef struct AnotherOne {
  int8_t x;
  int8_t y;
} Another;

typedef struct Example {
  Another num1[10];
  bool num2[20];
} Example;

typedef enum Example2 {
  YES = 10,
  NO = 20,
} Example2;

typedef struct {
  Another *ex;
} Test;

int main() {
  Example this = {
      .num1 = (Another){},
      .num2 = (bool){},
  };

  this.num1[2] = (Another){3, 8};
  this.num1[6] = (Another){10, 14};

  for (int i = 0; i < 10; i++) {
    printf("x = %d - y = %d\n", this.num1[i].x, this.num1[i].y);
  }

  this.num2[10] = false;
  printf("%b\n", this.num2[10]);

  printf("%lu\n", sizeof(this.num1));

  Example one = {.num1 = {1, 2, 3}, .num2 = {1, 2, 3, 4, 5}};
  Test two = {.ex = &one.num1[1]};

  printf("%d\n", 1);

  return 0;
}
