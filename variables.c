#include <stdio.h>

int main() {
    int integer = 1;
    float decimal = 2.0;
    double decimal2 = 3.0;
    char myCharacter = 'a';
    char string[] = "Hello";

    printf("int    d:  %d\n", integer);
    printf("int    i:  %i\n", integer);
    printf("float  f:  %f\n", decimal);
    printf("float  F:  %F\n", decimal);
    printf("double lf: %lf\n", decimal2);
    printf("char   c:  %c\n", myCharacter);
    printf("string s:  %s\n", string);

    return 0;
}
