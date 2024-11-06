#include <stdio.h>
#include <string.h>

int main() {
    char example[] = "This message is 34 characters long";

    printf("%s\n", example);
    printf("strlen %lu\n", strlen(example));
    printf("sizeof %lu\n", sizeof(example));

    char cat1[50] = "Start of string";
    char cat2[] = " and end of string";

    printf("strlen %lu\n", strlen(cat1));
    printf("strlen %lu\n", sizeof(cat1));

    printf("%s\n", cat1);
    printf("%s\n", cat2);

    strcat(cat1, cat2);

    printf("strlen %lu\n", strlen(cat1));
    printf("strlen %lu\n", sizeof(cat1));

    printf("%s\n", cat1);
    printf("%s\n", cat2);

    return 0;
}
