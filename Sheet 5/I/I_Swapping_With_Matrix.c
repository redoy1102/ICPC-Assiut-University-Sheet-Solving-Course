#include <stdio.h>
int main() {
    int n, x, y;
    scanf("%d%d%d", &n, &x, &y);
    int nums[n][n];

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &nums[i][j]);
        }
    }

    // Swapping rows
    for (int i = 0; i < n; i++) 
    {
        int temp = nums[x - 1][i];
        nums[x - 1][i] = nums[y - 1][i];
        nums[y - 1][i] = temp;
    }

    // Swapping columns
    for (int i = 0; i < n; i++) 
    {
        int temp = nums[i][x - 1];
        nums[i][x - 1] = nums[i][y - 1];
        nums[i][y - 1] = temp;
    }

    // Printing result
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%d ", nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}
