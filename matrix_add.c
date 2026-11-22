#include <stdio.h>
int main() {
    int ar[2][2] = {{2, 3}, {4, 5}};
    int ar2[2][2] = {{7, 8}, {8, 7}};
    int sum[2][2];
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 2; col++) {
            sum[row][col] = ar[row][col] + ar2[row][col];
        }
    }
    printf("Sum of the two matrices:\n");
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 2; col++) {
            printf("%d\t", sum[row][col]);
        }
        printf("\n");
    }
    return 0;
}