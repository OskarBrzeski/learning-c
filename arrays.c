#include <stdio.h>

int main() {
    int example[] = {18, 25, 390, 44444};

    printf("%d\n", example[4]);

    example[4] = 5;

    printf("%d\n", example[4]);

    printf("%d\n", example[6]);

    int another[] = {11, 21, 31, 42, 52, 62, 71, 83, 93};

    printf("- %d\n", another[9]);
    printf("- %d\n", another[10]);
    printf("- %d\n", another[11]);

    int sized[3];

    for (int i = 0; i < 10; ++i) {
        printf("sized %d\n", sized[i]);
    }

    return 0;
}
