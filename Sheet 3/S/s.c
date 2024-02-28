/*
    Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S
*/
#include<stdio.h>
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    int nums[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &nums[i][j]);
        }
    }
    int x;  scanf("%d", &x);
    int c = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(nums[i][j] == x)
            {
                c++;
            }
        }
    }
    if(c == 0)
    {
        printf("will take number\n");
    }
    else{
        printf("will not take number\n");
    }


    return 0;
}