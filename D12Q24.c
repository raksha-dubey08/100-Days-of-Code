/*
Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit


Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
#include <stdio.h>
int main() {    
    int units, bill;
    scanf("%d", &units);
    bill = (units <= 100) ? units * 5 :
           (units <= 200) ? (100 * 5) + ((units - 100) * 7) :
           (units <= 300) ? (100 * 5) + (100 * 7) + ((units - 200) * 10) :
                            (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    printf("Bill: ₹%d\n", bill);
    return 0;

    
}