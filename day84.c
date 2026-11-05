/*
 * 100 Days of Code - UPES
 * Day 84 | Date: 05-Nov-2026
 *
 * Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
 *
 * Sample Test Cases:
 * Input 1:
 * FAILURE
 * Output 1:
 * Operation failed
 * Explanation 1:
 * FAILURE corresponds to a failed operation message.
 */


#include <stdio.h>
#include <string.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    char input[20];
    printf("Enter status (SUCCESS, FAILURE, TIMEOUT): ");
    if (scanf("%s", input) != 1) return 0;

    enum Status status;
    if (strcmp(input, "SUCCESS") == 0) status = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0) status = FAILURE;
    else if (strcmp(input, "TIMEOUT") == 0) status = TIMEOUT;
    else {
        printf("Unknown status\n");
        return 0;
    }

    switch (status) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
    }
    return 0;
}