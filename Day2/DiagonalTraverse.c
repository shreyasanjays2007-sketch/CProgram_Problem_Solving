//Diagonal Traverse
#include <stdio.h>

void diagonalTraverse(int matrix[][100], int rows, int cols) {
    for (int diagonal = 0; diagonal < rows + cols - 1; diagonal++) {
        int row;
        int col;

        if (diagonal % 2 == 0) {
            row = diagonal < rows ? diagonal : rows - 1;
            col = diagonal - row;

            while (row >= 0 && col < cols) {
                printf("%d ", matrix[row][col]);
                row--;
                col++;
            }
        } else {
            col = diagonal < cols ? diagonal : cols - 1;
            row = diagonal - col;

            while (col >= 0 && row < rows) {
                printf("%d ", matrix[row][col]);
                row++;
                col--;
            }
        }
    }
}

int main() {
    int matrix[100][100] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = 3;
    int cols = 3;

    diagonalTraverse(matrix, rows, cols);

    return 0;
}