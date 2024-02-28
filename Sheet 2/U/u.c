#include<stdio.h>
int main(){
    int n, a, b, c;     scanf("%d%d%d", &n, &a, &b, &c);
    int res = 0;

    for(int i = 1; i <= n; i++)
    {
        int num = i;
        int sum = 0;    // digits of sum
        while(num != 0)
        {
            int r = num % 10;
            sum += r;
            num /= 10;
        }
        if(sum >= a && sum <= b)
        {
            res += i;
        }
    }
    printf("%d\n", res);


    return 0;
}