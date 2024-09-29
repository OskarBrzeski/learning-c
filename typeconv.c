#include <stdio.h>

int main() {
    int a = 1;
    float b = a;
    float c = (float) a;
    int d = c;
    int e = (int) c;

    printf("%d %f %f %d %d\n", a, b, c, d, e);

    double f = 1.123456789123456;
    float g = f;
    float h = (float) f;
    double i = h;
    double j = (double) h;

    printf("%.25lf\n%.25f\n%.25f\n%.25lf\n%.25lf\n ", f, g, h, i, j);

    return 0;
}
