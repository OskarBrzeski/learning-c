#include <stdio.h>

int main() {
    const int VALUE = 100;
    printf("%d\n", VALUE);

    const int ANOTHER;
    // another = 100;
    printf("%d\n", ANOTHER);

    return 0;
}
