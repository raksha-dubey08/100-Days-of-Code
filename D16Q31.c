/*
Q31: Write a program to take a number as input and print its equivalent binary representation.


Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>
int main() {
    int n, remainder, binary = 0, place = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) {
        remainder = n % 2; // Get the last binary digit
        binary = binary + remainder * place; // Place it in the correct position
        place *= 10; // Move to the next position
        n /= 2; // Divide the number by 2
    }
    printf("Binary representation = %d\n", binary);
    return 0;
}