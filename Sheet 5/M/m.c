#include <stdio.h>

int count(int nums[], int n) {
    int distinct = 0;
    for (int i = 0; i < n; i++) {
        int isDistinct = 1;
        for (int j = 0; j < i; j++) {
            if (nums[i] == nums[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (isDistinct) {
            distinct++;
        }
    }
    return distinct;
}

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
    } else {
        int nums[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &nums[i]);
        }

        int result = count(nums, n);
        printf("%d\n", result);
    }

    return 0;
}
