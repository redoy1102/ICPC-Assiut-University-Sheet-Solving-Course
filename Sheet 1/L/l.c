#include <stdio.h>
#include <string.h>
int main() {
    char a[200], b[200], c[200], d[200];

    scanf("%s %s", a, b);
    scanf("%s %s", c, d);
    
    if(strcmp(b, d) == 0) 
    {
        printf("ARE Brothers\n");
    }
    else 
    {
        printf("NOT\n");
    }

    return 0;
}