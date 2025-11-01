/*
Q75: Add two matrices.


Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;
    int A[100][100], B[100][100], sum[100][100];

    // Read dimensions of first matrix
    scanf("%d %d", &rows1, &cols1);

    // Read elements of first matrix
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Read dimensions of second matrix
    scanf("%d %d", &rows2, &cols2);

    // Check if dimensions match
    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrix dimensions do not match\n");
        return 1;
    }

    // Read elements of second matrix
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Compute sum of matrices
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Print the resulting matrix
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
