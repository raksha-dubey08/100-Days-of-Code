/*
Q73: Find the sum of each row of a matrix and store it in an array.


Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int matrix[100][100], rowSum[100];

    // Read number of rows and columns
    scanf("%d %d", &rows, &cols);

    // Read matrix elements
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of each row
    for(i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for(j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    // Print the sum of each row
    for(i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}
