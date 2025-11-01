/*
Q58: Find the maximum and minimum element in an array.


Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/

#include <stdio.h>

int main() {
    int n, i;
    int arr[100]; // assuming a maximum of 100 elements
    int max, min;

    // Read the size of the array
    scanf("%d", &n);

    // Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with the first element
    max = min = arr[0];

    // Find max and min
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    // Print results
    printf("Max=%d, Min=%d\n", max, min);

    return 0;
}
