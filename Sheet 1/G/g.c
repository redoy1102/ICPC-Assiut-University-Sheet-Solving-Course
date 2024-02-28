#include<stdio.h>
#include<string.h>
int main(){
    long long n, res;
    scanf("%lld", &n);

    res = (n*(n+1)) / 2;

    printf("%lld\n", res);


    return 0;
}