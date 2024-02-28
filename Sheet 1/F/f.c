#include<stdio.h>
int main(){
    long long n, m;
    scanf("%lld%lld", &n, &m);

    int res = (n % 10) + (m % 10);

    printf("%d\n", res);


    return 0;
}