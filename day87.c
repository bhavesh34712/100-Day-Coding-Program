/*
 * 100 Days of Code - UPES
 * Day 87 | Date: 08-Nov-2026
 *
 * Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
 *
 * Sample Test Cases:
 * Input 1:
 * GUEST
 * Output 1:
 * Welcome Guest!
 * Explanation 1:
 * Enum value determines which message is displayed.
 */


#include <stdio.h>
#include <string.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    char input[20];
    printf("Enter role (ADMIN, USER, GUEST): ");
    if (scanf("%s", input) != 1) return 0;

    enum Role role;
    if (strcmp(input, "ADMIN") == 0) role = ADMIN;
    else if (strcmp(input, "USER") == 0) role = USER;
    else if (strcmp(input, "GUEST") == 0) role = GUEST;
    else {
        printf("Invalid role\n");
        return 0;
    }

    switch (role) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }
    return 0;
}