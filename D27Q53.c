/*
Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*


Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/

#include <stdio.h>

int main() {
    int i, j;
    
    // Upper part of the pattern (1, 3, 5, 7, 9 stars)
    for(i = 1; i <= 9; i += 2) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    // Lower part of the pattern (7, 5, 3, 1 stars)
    for(i = 7; i >= 1; i -= 2) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
