#include<stdio.h>
int main(){
    while(1)
    {
        int num;
        scanf("%d", &num);

        if (num == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}