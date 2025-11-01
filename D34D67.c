/*
Q67: Insert an element in an array at a given position.


Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/

#include <stdio.h>

int main() {
    int n, i, pos, value;
    int arr[101]; // assuming a maximum of 100 elements + 1 for insertion

    // Read the size of the array
    scanf("%d", &n);

    // Read the array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the position and value to insert
    scanf("%d %d", &pos, &value);

    // Shift elements to the right from the end to the position
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new value
    arr[pos] = value;
    n++; // Increase array size

    // Print the updated array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
