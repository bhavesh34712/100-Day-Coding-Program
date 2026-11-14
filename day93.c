/*
 * 100 Days of Code - UPES
 * Day 93 | Date: 14-Nov-2026
 *
 * Q143: Find and print the student with the highest marks.
 *
 * Sample Test Cases:
 * Input 1:
 * 3 students: Ravi 101 95, Sita 102 85, Aman 103 88
 * Output 1:
 * Topper: Ravi (Marks: 95)
 * Explanation 1:
 * Program compares marks of all students and prints the one with the highest.
 */


#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    struct Student students[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    int top_idx = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[top_idx].marks) {
            top_idx = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", students[top_idx].name, students[top_idx].marks);
    return 0;
}