/*
Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.


Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

#define CHAR_SET 256 // Total possible ASCII characters

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int lastIndex[CHAR_SET]; // Stores last index of each character
    for(int i = 0; i < CHAR_SET; i++)
        lastIndex[i] = -1; // Initialize all characters as not seen

    int maxLen = 0;
    int start = 0; // Start index of current substring

    for(int i = 0; i < n; i++) {
        // If character was seen in current substring, move start
        if(lastIndex[(unsigned char)s[i]] >= start) {
            start = lastIndex[(unsigned char)s[i]] + 1;
        }

        lastIndex[(unsigned char)s[i]] = i; // Update last seen index
        int len = i - start + 1;
        if(len > maxLen)
            maxLen = len;
    }

    printf("%d\n", maxLen);
    return 0;
}
