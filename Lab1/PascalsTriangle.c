#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    int **pascalTriangle = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        pascalTriangle[i] = (int *)malloc((i + 1) * sizeof(int));
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                pascalTriangle[i][j] = 1;
            } else {
                pascalTriangle[i][j] = pascalTriangle[i - 1][j - 1] + pascalTriangle[i - 1][j];
            }
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int space = 0; space < rows - i; space++) {
            printf("  ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%4d ", pascalTriangle[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        free(pascalTriangle[i]);
    }
    free(pascalTriangle);

    return 0;
}
