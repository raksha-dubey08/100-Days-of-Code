/*

Q97: Print the initials of a name.


Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[1000];
    fgets(name, sizeof(name), stdin);

    // Remove newline if present
    name[strcspn(name, "\n")] = '\0';

    int len = strlen(name);

    for (int i = 0; i < len; i++) {
        // Print the first character of the name or after a space
        if (i == 0 && name[i] != ' ') {
            printf("%c.", toupper(name[i]));
        } else if (name[i] == ' ' && name[i+1] != '\0' && name[i+1] != ' ') {
            printf("%c.", toupper(name[i+1]));
        }
    }

    printf("\n");
    return 0;
}
