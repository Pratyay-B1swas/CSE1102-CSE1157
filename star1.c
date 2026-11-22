#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space < i; space++) {
            printf("  ");
        }
        for (int j = i; j <= rows; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}