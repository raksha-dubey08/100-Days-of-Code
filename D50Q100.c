/*

Q100: Print all sub-strings of a string.


Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;

    // Read input string
    scanf("%s", str);

    len = strlen(str);

    // Generate all substrings
    for(i = 0; i < len; i++) {
        for(j = i; j < len; j++) {
            // Print substring from index i to j
            for(int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf(","); // separator
        }
    }

    printf("\n");
    return 0;
}
