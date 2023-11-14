#include <stdio.h>

void matrixMultiply(int (*mat1)[3], int (*mat2)[3], int (*result)[3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0;

            for (int k = 0; k < 3; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void inputMatrix(int (*mat)[3]) {
    printf("Enter elements for the matrix (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element at position [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
}

void printMatrix(int (*mat)[3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[3][3], matrix2[3][3], resultMatrix[3][3];

    inputMatrix(matrix1);
    inputMatrix(matrix2);

    matrixMultiply(matrix1, matrix2, resultMatrix);

    printf("\nMatrix 1:\n");
    printMatrix(matrix1);

    printf("\nMatrix 2:\n");
    printMatrix(matrix2);

    printf("\nResult Matrix:\n");
    printMatrix(resultMatrix);

    return 0;
}
