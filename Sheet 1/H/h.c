// Submit in: Clang++20 Diagnostics

#include <stdio.h>
#include <math.h>

int main() {

   double a, b;
   scanf("%lf%lf", &a, &b);

   int f = floor(a / b);
   int c = ceil(a / b);
   int r = round(a / b);

   printf("floor %.0lf / %.0lf = %d\n", a, b, f);
   printf("ceil %.0lf / %.0lf = %d\n", a, b, c);
   printf("round %.0lf / %.0lf = %d\n", a, b, r);

   
   return 0;
}