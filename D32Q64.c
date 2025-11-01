/*
Q64: Find the digit that occurs the most times in an integer number.


Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main() {
    long long num;
    int digit, i;
    int freq[10] = {0}; // frequency of digits 0-9

    // Read the number
    scanf("%lld", &num);

    // Count frequency of each digit
    while(num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find the digit with maximum frequency
    int maxFreq = freq[0];
    int maxDigit = 0;
    for(i = 1; i < 10; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }

    // Print the digit with maximum occurrences
    printf("%d", maxDigit);

    return 0;
}
