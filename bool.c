#include <stdbool.h>
#include <stdio.h>

int main() {
  bool b1 = true;
  bool b2 = false;
  printf("%d %d bytes=%lu\n", b1, b2, sizeof(b1));
  printf("Booleans are just integers\n");

  bool lt = 10 < 5;
  bool gt = 10 > 5;
  bool eq = 10 == 5;
  bool ne = 10 != 5;
  printf("%d %d %d %d\n", lt, gt, eq, ne);

  bool conv = 2;
  printf("2 becomes %d\n", conv);

  return 0;
}
