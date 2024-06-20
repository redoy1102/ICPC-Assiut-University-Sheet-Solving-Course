#include<stdio.h>
int main(){
    int a, b;
    char ch;
    scanf("%d %c %d", &a, &ch, &b);

    if(ch == '=')
    {
        if(a == b)
            printf("Right\n");
        else
            printf("Wrong\n");
    }
    else if(ch == '<')
    {
        if(a < b)
            printf("Right\n");
        else
            printf("Wrong\n");
    }
    else{
        if(a > b)
            printf("Right\n");
        else
            printf("Wrong\n");
    }

    return 0;
}