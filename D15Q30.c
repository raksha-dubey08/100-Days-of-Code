/*
Q30: Write a program to reverse a given number.


Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include <stdio.h>
int main() {    
    int n, reversed = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10; // Get the last digit
        reversed = reversed * 10 + remainder; // Append it to the reversed number
        n /= 10; // Remove the last digit from the original number
    }
    printf("Reversed number = %d\n", reversed);
    return 0;   
}