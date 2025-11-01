/*
Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*




Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>

int main() {
    // First single star
    printf("*\n\n");
    
    // Group of 3 stars
    printf("*\n*\n*\n\n");
    
    // Group of 5 stars
    printf("*\n*\n*\n*\n*\n\n");
    
    // Group of 3 stars again
    printf("*\n*\n*\n\n");
    
    // Last single star
    printf("*\n");
    
    return 0;
}
