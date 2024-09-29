#include <stdio.h>

int main() {
    float small = 1.75;

    printf("Float (32-bit)\n");
    printf("Def:  %f\n", small);
    printf("2dp:  %.2f\n", small);
    printf("1dp:  %.1f\n", small);
    printf("\n");

    double large = 3.14159265358979323;

    printf("Double (64-bit)\n");
    printf("10dp: %.10lf\n", large);
    printf("Def:  %lf\n", large);
    printf("4dp:  %.4lf\n", large);
    printf("2dp:  %.2lf\n", large);
    printf("\n");

    printf("Banker's rounding\n");
    printf("1.5:  %.0f\n", 1.5);
    printf("2.5:  %.0f\n", 2.5);

    return 0;
}
