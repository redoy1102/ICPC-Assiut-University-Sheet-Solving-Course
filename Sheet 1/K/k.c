#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int ar[3] = {a, b, c};
    // 1 2 3

    int mx = ar[0], mn = ar[0];

    for(int i = 1; i < 3; i++)
    {
        if(ar[i] > mx)  mx = ar[i];
        if(ar[i] < mn)  mn = ar[i];
    }

    printf("%d %d", mn, mx);


    return 0;
}