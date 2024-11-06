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

    printf("bytes taken up %lu\n", sizeof(example));
    printf("elements in arr %lu\n", sizeof(example) / sizeof(example[0]));
    
    int multi[2][4] = { {1, 2, 3, 4}, {5, 6, 7, 8} };

    printf("row 0, column 2 %d\n", multi[0][2]);
    printf("row 1, column 3 %d\n", multi[1][3]);
    printf("size of multi %lu\n", sizeof(multi));

    return 0;
}
