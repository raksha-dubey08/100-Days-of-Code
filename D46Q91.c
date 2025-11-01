/*
Q91: Remove all vowels from a string.


Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include <stdio.h>

int main() {
    char str[100], result[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read string with spaces

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        // Check if not a vowel
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U' &&
            ch != '\n') {  // Ignore newline from fgets
            result[j] = ch;
            j++;
        }
    }

    result[j] = '\0';  // Null-terminate the result string

    printf("%s\n", result);

    return 0;
}
