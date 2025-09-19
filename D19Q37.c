/*
Q37: Write a program to find the LCM of two numbers.


Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>
int main() {
    int a, b, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b; // Start checking from the larger number
    while (1) {
        if (max % a == 0 && max % b == 0) {
            printf("LCM = %d\n", max);
            break;
        }
        max++; // Increment to check the next number
    }
    return 0;   
}