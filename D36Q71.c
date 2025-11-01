/*
Q71: Read and print a matrix.


Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/

#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int matrix[100][100]; // assuming maximum size 100x100

    // Read number of rows and columns
    scanf("%d %d", &rows, &cols);

    // Read matrix elements
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n"); // new line after each row
    }

    return 0;
}
