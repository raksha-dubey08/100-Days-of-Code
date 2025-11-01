/*
Q85: Reverse a string.


Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    int length = 0, i, j;

    printf("Enter a string: ");
    scanf("%s", str);  // Reads a word (no spaces)

    // Find length of string manually
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string
    for (i = length - 1, j = 0; i >= 0; i--, j++) {
        reversed[j] = str[i];
    }
    reversed[j] = '\0';  // Null-terminate the reversed string

    printf("%s\n", reversed);

    return 0;
}
