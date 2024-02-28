#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d", &n);
    int space = n-1;
    int star = 1;

    for(int i = 1; i <= n; i++){
        for(int i = 1; i <= space; i++){
            printf(" ");
        }
        for(int i = 1; i <= star; i++){
            printf("*");
        }
        space--;
        star += 2;
        printf("\n");
    }

    space++;
    star -= 2;
    for(int i = 1; i <= n; i++){
        for(int i = 1; i <= space; i++){
            printf(" ");
        }
        for(int i = 1; i <= star; i++){
            printf("*");
        }
        space++;
        star -= 2;
        printf("\n");
    }


    return 0;
}