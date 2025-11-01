/*
Q94: Find the longest word in a sentence.


Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    char word[100], longest[100];
    int maxLength = 0;

    // Read the full sentence including spaces
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline character if present
    sentence[strcspn(sentence, "\n")] = '\0';

    char *token = strtok(sentence, " "); // Split sentence by spaces

    while (token != NULL) {
        if (strlen(token) > maxLength) {
            maxLength = strlen(token);
            strcpy(longest, token);
        }
        token = strtok(NULL, " ");
    }

    printf("%s\n", longest);

    return 0;
}
