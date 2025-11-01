/*
Q41: Write a program to swap the first and last digit of a number.


Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swapped;
    
    // Input
    scanf("%d", &num);
    
    last = num % 10;  // Get last digit
    digits = (int)log10(num);  // Number of digits - 1
    first = num / pow(10, digits);  // Get first digit

    // If number has only one digit, no change
    if (digits == 0) {
        printf("%d", num);
        return 0;
    }

    // Remove first digit and last digit
    int middle = num % (int)pow(10, digits);
    middle = middle / 10;

    // Form the swapped number
    swapped = last * pow(10, digits) + middle * 10 + first;

    printf("%d", swapped);

    return 0;
}
