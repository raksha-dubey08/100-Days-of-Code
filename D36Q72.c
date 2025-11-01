/*
Q72: Find the sum of all elements in a matrix.


Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include <stdio.h>

int main() {
    int rows, cols, sum = 0;
    int matrix[100][100]; // assuming max size of 100x100

    // Read number of rows and columns
    scanf("%d %d", &rows, &cols);

    // Read matrix elements and compute sum
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    // Print the total sum
    printf("%d\n", sum);

    return 0;
}
