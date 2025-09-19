/*
Q38: Write a program to find the sum of digits of a number.


Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/

#include <stdio.h>
int main() {    
    int n, digit, product = 1;
    int hasOdd = 0; // Flag to check if there's at least one odd digit
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) {
        digit= n % 10; // Get the last digit
        if (digit % 2 != 0) { // Check if the digit is odd
            product *= digit; // Multiply it to the product
            hasOdd = 1; // Set the flag to true
        }
        n = n / 10; // Remove the last digit from the original number
    }
    if (!hasOdd) {
        product = 1; // if no odd digit found, product should be 1
    }
    printf("Product of odd digits = %d\n", product);
    return 0;
}