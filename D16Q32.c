/*
Q32: Write a program to check if a number is a palindrome.


Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>
int main() {    
    int n, original, reversed = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n; // Store the original number
    while (n > 0) {
        remainder = n % 10; 
        reversed = reversed * 10 + remainder; // Build the reversed number
        n /= 10; // Remove the last digit from the original number
    } 
    // using ternary operator intead of if-else
  printf("%s\n", (original == reversed) ? "Palindrome" : "Not palindrome");
    return 0;
}