#include <stdio.h>
#include <math.h>
#include<stdbool.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        if (n <= 1)
        {
            printf("NO\n");
        }
        else{
            bool f = true;
            for (int i = 2; i <= sqrt(n); i++)
            {
                if (n % i == 0)
                {
                    f = false;
                }
            }
            if(f)
            {
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    }

    return 0;
}
