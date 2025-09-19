/*
Q40: Write a program to find the 1’s complement of a binary number and print it.


Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a binary number: ");

    while ((ch = getchar()) != '\n') {
        if (ch == '0') {
            putchar('1');
        } else if (ch == '1') {
            putchar('0');
        } else {
            printf("\nInvalid input '%c'. Only 0 and 1 are allowed.\n", ch);
            return 1;
        }
    }

    printf("\n");
    return 0;
}
