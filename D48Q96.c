/*
Q96: Reverse each word in a sentence without changing the word order.


Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[1000];
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline character if present
    sentence[strcspn(sentence, "\n")] = '\0';

    char *wordStart = sentence;
    char *ptr = sentence;

    while (*ptr) {
        if (*ptr == ' ' || *(ptr + 1) == '\0') {
            char *wordEnd = (*ptr == ' ') ? ptr - 1 : ptr;
            reverseWord(wordStart, wordEnd);
            wordStart = ptr + 1;
        }
        ptr++;
    }

    printf("%s\n", sentence);

    return 0;
}

