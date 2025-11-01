/*
Q66: Insert an element in a sorted array at the appropriate position.


Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>

int main() {
    int n, i, key;
    int arr[100]; // assuming maximum size

    // Read size of the array
    scanf("%d", &n);

    // Read sorted array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read element to insert
    scanf("%d", &key);

    // Find the correct position to insert
    for(i = 0; i < n; i++) {
        if(arr[i] > key)
            break;
    }

    // Shift elements to make space
    for(int j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    }

    // Insert the element
    arr[i] = key;
    n++; // increment array size

    // Print the updated array
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
