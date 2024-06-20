#include<stdio.h>

int main(){
    long long x, y;
    scanf("%lld%lld", &x, &y);

    long long sum = x+y;
    long long sub = x - y;
    long long m = x * y;

    printf("%lld + %lld = %lld\n", x, y, sum);
    printf("%lld * %lld = %lld\n", x, y, m);
    printf("%lld - %lld = %lld\n", x, y, sub);

    return 0;
}