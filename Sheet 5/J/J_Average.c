#include<stdio.h>
int main(){
    int n;  scanf("%d", &n);
    float num[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%f", &num[i]);
    }
    
    double res = 0;
    for(int i = 0; i < n; i++)
    {
        res += num[i];
    }
    double av = res / n;
    printf("%.7lf\n", av);

    return 0;
}