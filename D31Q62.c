/*
Q62: Reverse an array without taking extra space.


Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/

#include <stdio.h>

int main() {
    int n, i, temp;
    int arr[100]; // assuming a maximum of 100 elements

    // Read number of elements
    scanf("%d", &n);

    // Read array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse array in place
    for(i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    // Print reversed array
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
