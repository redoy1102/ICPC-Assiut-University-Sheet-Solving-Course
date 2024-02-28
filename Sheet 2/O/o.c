#include <stdio.h>

void solve(int n) {
    for (int row = 0; row < n; row++) {
        for (int col = 0; col <= row; col++) {
            printf("*");
        }
        printf("\n");
    }
}

void main() {
    // int t;
    // scanf("%d", &t);
    int t = 1;

    for (int i = 0; i < t; i++) {
        int n;
        // scanf("%d", &n);
        n = 5;  // You can replace 5 with any desired value for testing

        solve(n);
        // check();
    }
}
