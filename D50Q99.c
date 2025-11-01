/*
Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.


Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>

int main() {
    int day, month, year;
    char monthStr[4];

    // Read input date in dd/mm/yyyy format
    scanf("%d/%d/%d", &day, &month, &year);

    // Convert month number to month abbreviation
    switch (month) {
        case 1:  sprintf(monthStr, "Jan"); break;
        case 2:  sprintf(monthStr, "Feb"); break;
        case 3:  sprintf(monthStr, "Mar"); break;
        case 4:  sprintf(monthStr, "Apr"); break;
        case 5:  sprintf(monthStr, "May"); break;
        case 6:  sprintf(monthStr, "Jun"); break;
        case 7:  sprintf(monthStr, "Jul"); break;
        case 8:  sprintf(monthStr, "Aug"); break;
        case 9:  sprintf(monthStr, "Sep"); break;
        case 10: sprintf(monthStr, "Oct"); break;
        case 11: sprintf(monthStr, "Nov"); break;
        case 12: sprintf(monthStr, "Dec"); break;
        default: sprintf(monthStr, "???"); break; // invalid month
    }

    // Print date in dd-MMM-yyyy format
    printf("%02d-%s-%d\n", day, monthStr, year);

    return 0;
}
