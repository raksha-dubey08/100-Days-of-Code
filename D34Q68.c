/*
Q68: Delete an element from an array.


Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include <stdio.h>

int main() {
    int n, i, pos;
    int arr[100]; // assuming a maximum of 100 elements

    // Read the size of the array
    scanf("%d", &n);

    // Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the position to delete
    scanf("%d", &pos);

    // Validate position
    if (pos < 0 || pos >= n) {
        printf("Invalid position\n");
        return 1;
    }

    // Shift elements to the left to overwrite the deleted element
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // Reduce array size

    // Print updated array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

