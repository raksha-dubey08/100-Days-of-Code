/*
Q88: Replace spaces with hyphens in a string.


Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/


#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read string with spaces

    // Replace spaces with hyphens
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    printf("%s", str);

    return 0;
}


