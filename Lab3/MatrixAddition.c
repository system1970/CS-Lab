#include <stdio.h>

void add3X3Matrices(int mat1[3][3], int mat2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void displayMatrix(int mat[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[3][3], matrix2[3][3], resultMatrix[3][3];

    // Input matrices
    printf("Enter elements of the first matrix (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter a number(%d, %d): ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second matrix (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter a number(%d, %d): ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    add3X3Matrices(matrix1, matrix2, resultMatrix);
    printf("\tMatrix 1\n");
    displayMatrix(matrix1);
    printf("\tMatrix 2\n");
    displayMatrix(matrix2);
    printf("\nResult Matrix (Sum of Two Matrices):\n");
    displayMatrix(resultMatrix);

    return 0;
}
