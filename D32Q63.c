/*
Q63: Merge two arrays.


Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>

int main() {
    int n1, n2, i;
    int arr1[100], arr2[100], merged[200];

    // Read size and elements of first array
    scanf("%d", &n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
        merged[i] = arr1[i]; // Copy to merged array
    }

    // Read size and elements of second array
    scanf("%d", &n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
        merged[n1 + i] = arr2[i]; // Append to merged array
    }

    // Print merged array
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
