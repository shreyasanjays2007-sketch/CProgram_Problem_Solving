//spiralOrder2
#include <stdlib.h>
#include <stdio.h>
int** generateMatrix(int n, int* returnSize, int** returnColumnSizes) {
    int** matrix = malloc(n * sizeof(int*));

    *returnSize = n;
    *returnColumnSizes = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        matrix[i] = malloc(n * sizeof(int));
        (*returnColumnSizes)[i] = n;
    }

    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = n - 1;
    int value = 1;

    while (top <= bottom && left <= right) {
        for (int col = left; col <= right; col++)
            matrix[top][col] = value++;
        top++;

        for (int row = top; row <= bottom; row++)
            matrix[row][right] = value++;
        right--;

        if (top <= bottom) {
            for (int col = right; col >= left; col--)
                matrix[bottom][col] = value++;
            bottom--;
        }

        if (left <= right) {
            for (int row = bottom; row >= top; row--)
                matrix[row][left] = value++;
            left++;
        }
    }

    return matrix;
}
int main(){
    int n = 3;
    int returnSize;
    int* returnColumnSizes;
    int** result = generateMatrix(n, &returnSize, &returnColumnSizes);

    printf("Generated Matrix:\n");
    for (int i = 0; i < returnSize; i++) {
        for (int j = 0; j < returnColumnSizes[i]; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < returnSize; i++) {
        free(result[i]);
    }
    free(result);
    free(returnColumnSizes);

    return 0;
}