/*
Q57: Find the sum of array elements.


Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int arr[100]; // assuming a maximum of 100 elements

    // Read the size of the array
    scanf("%d", &n);

    // Read array elements and calculate sum
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Print the sum
    printf("%d\n", sum);

    return 0;
}
