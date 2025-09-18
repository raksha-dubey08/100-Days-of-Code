/*
Q22: Write a program to find profit or loss percentage given cost price and selling price.


Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/


#include <stdio.h>
int main() {
    float cost_price, selling_price, percentage;
    scanf("%f %f", &cost_price, &selling_price);
    percentage = ((selling_price - cost_price) / cost_price) * 100;
    // using conditional statements to determine profit or loss
    (selling_price > cost_price) ? printf("Profit %.0f%%\n", percentage) :
    (selling_price < cost_price) ? printf("Loss %.0f%%\n", -percentage) :
    printf("No Profit No Loss\n");
    
    return 0;
}
    