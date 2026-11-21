/*
 * 100 Days of Code - UPES
 * Day 100 | Date: 21-Nov-2026
 *
 * Q150: Use pointer to struct to modify and display data using -> operator.
 *
 * Sample Test Cases:
 * Input 1:
 * Student pointer modifying values: John 106 91
 * Output 1:
 * Modified Data: Name: John | Roll: 106 | Marks: 91
 * Explanation 1:
 * Pointer to structure accesses and modifies data using the arrow (->) operator.
 */


#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;

    char new_name[50];
    int new_roll, new_marks;
    printf("Enter new details (Name Roll Marks): ");
    if (scanf("%s %d %d", new_name, &new_roll, &new_marks) == 3) {
        strcpy(ptr->name, new_name);
        ptr->roll = new_roll;
        ptr->marks = new_marks;

        printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n", ptr->name, ptr->roll, ptr->marks);
    }
    return 0;
}