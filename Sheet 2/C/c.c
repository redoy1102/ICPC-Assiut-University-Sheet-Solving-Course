#include<stdio.h>
int main(){
    int s;  scanf("%d", &s);
    int ar[s];
    for(int i = 0; i < s; i++)
    {
        scanf("%d", &ar[i]);
    }

    int e = 0, o = 0, p = 0, n = 0;
    for(int i = 0; i < s; i++)
    {
        if(ar[i] %2 == 0){e++;}
        if(ar[i] %2 != 0){o++;}
        if(ar[i] > 0){p++;}
        if(ar[i] < 0){n++;}
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", e, o, p, n);

    


    return 0;
}