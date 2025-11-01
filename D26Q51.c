/*
Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345


Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/

#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        // Print numbers from i to 5
        for (int k = i; k <= 5; k++) {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}
