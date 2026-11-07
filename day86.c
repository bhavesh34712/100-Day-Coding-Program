/*
 * 100 Days of Code - UPES
 * Day 86 | Date: 07-Nov-2026
 *
 * Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
 *
 * Sample Test Cases:
 * Input 1:
 * ADD 10 20
 * Output 1:
 * 30
 * Explanation 1:
 * The enum ADD triggers addition of 10 and 20.
 */


#include <stdio.h>
#include <string.h>

enum MenuChoice {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    char op[20];
    int a, b;
    printf("Enter choice (ADD, SUBTRACT, MULTIPLY) and two numbers: ");
    if (scanf("%s %d %d", op, &a, &b) != 3) return 0;

    enum MenuChoice choice;
    if (strcmp(op, "ADD") == 0) choice = ADD;
    else if (strcmp(op, "SUBTRACT") == 0) choice = SUBTRACT;
    else if (strcmp(op, "MULTIPLY") == 0) choice = MULTIPLY;
    else {
        printf("Invalid choice\n");
        return 0;
    }

    switch (choice) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }
    return 0;
}