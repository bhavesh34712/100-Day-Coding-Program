/*
 * 100 Days of Code - UPES
 * Day 96 | Date: 17-Nov-2026
 *
 * Q146: Create Employee structure with nested Date structure for joining date and print details.
 *
 * Sample Test Cases:
 * Input 1:
 * Employee: Raj | ID: 11 | Joining Date: 12 05 2020
 * Output 1:
 * Name: Raj | ID: 11 | Joining Date: 12/05/2020
 * Explanation 1:
 * Nested structure Date is used inside Employee structure to represent joining date.
 */


#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joining_date;
};

int main() {
    struct Employee emp;
    printf("Enter Name: ");
    if (scanf("%s", emp.name) != 1) return 0;
    printf("Enter ID: ");
    if (scanf("%d", &emp.id) != 1) return 0;
    printf("Enter Joining Date (dd mm yyyy): ");
    if (scanf("%d %d %d", &emp.joining_date.day, &emp.joining_date.month, &emp.joining_date.year) != 3) return 0;

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           emp.name, emp.id, emp.joining_date.day, emp.joining_date.month, emp.joining_date.year);
    return 0;
}