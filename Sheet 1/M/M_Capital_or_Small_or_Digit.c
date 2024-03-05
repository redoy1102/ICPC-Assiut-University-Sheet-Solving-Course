#include<stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    int num = ch;

    if(num >= 48 && num <= 57)
    {
        printf("IS DIGIT\n");
    }
    else if(num >= 65 && num <= 90)
    {
        printf("ALPHA\nIS CAPITAL\n");
    }
    else if(num >= 97 && num <= 122)
    {
        printf("ALPHA\nIS SMALL\n");
    }

    return 0;
}