/*
 * 100 Days of Code - UPES
 * Day 89 | Date: 10-Nov-2026
 *
 * Q139: Show that enums store integers by printing assigned values.
 *
 * Sample Test Cases:
 * Input 1:
 * No input
 * Output 1:
 * SUCCESS=0, FAILURE=1, TIMEOUT=2
 * Explanation 1:
 * Enum constants are internally stored as integer values starting from 0.
 */


#include <stdio.h>

enum StatusCode {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);
    return 0;
}