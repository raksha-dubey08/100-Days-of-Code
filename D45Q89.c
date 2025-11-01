/*
Q89: Count frequency of a given character in a string.


Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read string with spaces

    printf("Enter a character to count: ");
    scanf(" %c", &ch);  // Space before %c to ignore newline

    // Count occurrences
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
