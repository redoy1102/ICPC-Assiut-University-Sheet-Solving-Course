#include <stdio.h>
#include <math.h>

int main() {
    double R, area;
    const double pi = 3.141592653;

    scanf("%lf", &R);

    area = pi * R * R;

    printf("%.9lf\n", area);

    return 0;
}