/*
 * 100 Days of Code - UPES
 * Day 97 | Date: 18-Nov-2026
 *
 * Q147: Store employee data in a binary file using fwrite() and read using fread().
 *
 * Sample Test Cases:
 * Input 1:
 * Employee details entered and stored in file.
 * Output 1:
 * Displays employee data read from file.
 * Explanation 1:
 * Demonstrates writing and reading structures using binary file handling functions.
 */


#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp_write;
    printf("Enter Employee Name, ID, Salary: ");
    if (scanf("%s %d %f", emp_write.name, &emp_write.id, &emp_write.salary) != 3) return 0;

    FILE *fp = fopen("employee.bin", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    fwrite(&emp_write, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Data successfully written to binary file.\n");

    struct Employee emp_read;
    fp = fopen("employee.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    fread(&emp_read, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Read from binary file:\n");
    printf("Name: %s | ID: %d | Salary: %.2f\n", emp_read.name, emp_read.id, emp_read.salary);
    return 0;
}