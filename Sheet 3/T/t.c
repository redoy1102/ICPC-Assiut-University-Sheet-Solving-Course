#include<stdio.h>
int main(){
    int n;  scanf("%d", &n);
    int matrix[n][n];
    int primary = 0, sec = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
            if(i == j)
            {
                primary += matrix[i][j];
            }
        }
    }

    int c = n-1;
    for(int i = 0; i < n; i++)
    {
        sec += matrix[i][c];
        c -= 1;
    }

    int res = (primary - sec);
    if(res < 0)
    {
        printf("%d\n", res*(-1));
    }
    else
    {
        printf("%d\n", res);
    }
    



    return 0;
}