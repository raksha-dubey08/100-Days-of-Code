/*

Q98: Print initials of a name with the surname displayed in full.


Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    fgets(name, sizeof(name), stdin); // Read full line

    // Remove trailing newline if any
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    char *token = strtok(name, " ");
    char *words[10]; // to store name parts
    int count = 0;

    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    // Print initials for all except last word
    for (int i = 0; i < count - 1; i++) {
        printf("%c.", words[i][0]);
    }

    // Print the last word (surname) in full
    printf(" %s\n", words[count - 1]);

    return 0;
}
