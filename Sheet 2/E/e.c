#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int ar[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    
    int mx = ar[0];
    for(int i = 1; i < n; i++)
    {
        if(ar[i] > mx)
        {
            mx = ar[i];
        }
    }
    printf("%d\n", mx);

    return 0;
}