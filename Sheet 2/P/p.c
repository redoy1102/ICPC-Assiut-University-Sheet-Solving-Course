#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d", &n);
    int cn = n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= cn; j++){
            printf("*");
        }
        cn--;
        printf("\n");
    }


    return 0;
}