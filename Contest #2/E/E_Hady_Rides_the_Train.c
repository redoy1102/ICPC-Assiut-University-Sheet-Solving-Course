#include <stdio.h>

int main() {
    int seat;
    scanf("%d", &seat);

    int row = seat / 4;

    printf("%d ", row);

    if (row % 2 == 0) {
        printf("%d\n", seat % 4);     // column
    } else {
        printf("%d\n", 3 - (seat % 4));  // column
    }

    return 0;
}
