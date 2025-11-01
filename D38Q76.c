/*
Q76: Check if a matrix is symmetric.


Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[100][100];
    int isSymmetric = 1;

    // Read the size of the square matrix
    scanf("%d %d", &n, &n); // both rows and columns must be equal

    // Read matrix elements
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check symmetry
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }

    // Print result
    if (isSymmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
