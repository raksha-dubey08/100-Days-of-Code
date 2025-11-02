/*
Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.


Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/

#include <stdio.h>

int main() {
    int n;

    // Read array size
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    int freq[100001] = {0}; // Assuming values are in range 0 to 100000

    // Read array and detect duplicate in one pass
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
        if (freq[arr[i]] == 2) {
            printf("Repeated element: %d\n", arr[i]);
            return 0;
        }
    }

    // If no duplicate found (shouldn't happen per problem statement)
    printf("No duplicate found\n");
    return 0;
}