/*
 * 100 Days of Code - UPES
 * Day 92 | Date: 13-Nov-2026
 *
 * Q142: Store details of 5 students in an array of structures and print all.
 *
 * Sample Test Cases:
 * Input 1:
 * Details of 5 students (Name, Roll, Marks)
 * Output 1:
 * Tabular list of all 5 students with their details
 * Explanation 1:
 * The array of structures stores multiple student records and displays them in a table.
 */


#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student students[5];
    printf("Enter details for 5 students (Name Roll Marks):\n");
    for (int i = 0; i < 5; i++) {
        scanf("%s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    printf("\n%-15s %-10s %-5s\n", "Name", "Roll No", "Marks");
    printf("----------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%-15s %-10d %-5d\n", students[i].name, students[i].roll_no, students[i].marks);
    }
    return 0;
}