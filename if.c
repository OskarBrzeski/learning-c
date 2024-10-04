#include <stdio.h>
#include <stdbool.h>

int main() {
    if (true) printf("One-liner\n");

    if (false) printf("Never runs\n");

    if (true)
        printf("Can be written like this\n");

    const bool IF = 0, ELSEIF1 = 1, ELSEIF2 = 2;
    const bool current = ELSEIF1;

    if (current == IF) {
        printf("Usual way of writing it\n");
    } else if (current == ELSEIF1) {
        printf("As many as needed\n");
    } else if (current == ELSEIF2) {
        printf("Woohoo!\n");
    } else {
        printf("Finally Done\n");
    }

    if (false) printf("1\n");
    else if (true) printf("1.5\n");
    else printf("2\n");

    if (false)
        printf("3\n");
    else if (true)
        printf("3.5\n");
    else
        printf("4\n");

    return 0;
}
