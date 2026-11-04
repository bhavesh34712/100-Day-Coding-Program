/*
 * 100 Days of Code - UPES
 * Day 83 | Date: 04-Nov-2026
 *
 * Q133: Create an enum for months and print how many days each month has.
 *
 * Sample Test Cases:
 * Input 1:
 * FEB
 * Output 1:
 * 28 or 29 days
 * Explanation 1:
 * February has 28 days in a normal year and 29 in a leap year.
 */


#include <stdio.h>
#include <string.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    char input[10];
    printf("Enter month abbreviation (e.g. JAN, FEB): ");
    if (scanf("%s", input) != 1) return 0;

    if (strcmp(input, "FEB") == 0) {
        printf("28 or 29 days\n");
    } else if (strcmp(input, "APR") == 0 || strcmp(input, "JUN") == 0 ||
               strcmp(input, "SEP") == 0 || strcmp(input, "NOV") == 0) {
        printf("30 days\n");
    } else {
        printf("31 days\n");
    }
    return 0;
}