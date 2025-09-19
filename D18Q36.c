/*
Q36: Write a program to find the HCF (GCD) of two numbers.


Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include <stdio.h>
int main() {
    int a, b, hcf = 1, i;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b); 
    for (i = 1; i <= (a < b ? a : b); i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i; // Update HCF if i divides both a and b
        }
    }
    printf("HCF = %d\n", hcf);
    return 0;   
}