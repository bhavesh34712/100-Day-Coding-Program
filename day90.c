/*
 * 100 Days of Code - UPES
 * Day 90 | Date: 11-Nov-2026
 *
 * Q140: Define a struct with enum Gender and print person's gender.
 *
 * Sample Test Cases:
 * Input 1:
 * Gender=MALE
 * Output 1:
 * Male
 * Explanation 1:
 * The enum inside the struct allows representing gender as a named constant.
 */


#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    char genStr[20];
    printf("Enter Gender (MALE, FEMALE, OTHER): ");
    if (scanf("%*[^=]=%s", genStr) != 1) {
        // Fallback if input without Gender=
        scanf("%s", genStr);
    }

    struct Person p;
    if (strcmp(genStr, "MALE") == 0 || strcmp(genStr, "Male") == 0) p.gender = MALE;
    else if (strcmp(genStr, "FEMALE") == 0 || strcmp(genStr, "Female") == 0) p.gender = FEMALE;
    else p.gender = OTHER;

    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }
    return 0;
}