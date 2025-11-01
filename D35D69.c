/*
Q69: Find the second largest element in an array.


Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int max, secondMax;

    // Read the size of the array
    scanf("%d", &n);

    // Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and secondMax
    if (arr[0] > arr[1]) {
        max = arr[0];
        secondMax = arr[1];
    } else {
        max = arr[1];
        secondMax = arr[0];
    }

    // Find the second largest
    for (i = 2; i < n; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }

    // Print the result
    printf("%d\n", secondMax);

    return 0;
}
