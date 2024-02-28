#include <stdio.h>
int main()
{
    long long x, y;
    long long m, a, b;
    scanf("%lld %lld", &x, &y);
    
    m = x * y;
    a = x + y;
    b = x - y;
    
    printf("%lld + %lld = %lld\n", x, y, a);
    printf("%lld * %lld = %lld\n", x, y, m);
    printf("%lld - %lld = %lld\n", x, y, b);

    return 0;
}