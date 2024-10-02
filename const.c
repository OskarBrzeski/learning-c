#include <stdio.h>

int main() {
    const int value = 100;
    printf("%d\n", value);

    const int another;
    // another = 100;
    printf("%d\n", another);

    return 0;
}
