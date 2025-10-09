/*
Name;morris kathurima 
reg no;CT100/26260/25
description;a program that checks if a student is eligible for final exams
*/


#include <stdio.h>

int main()
 {
    float attendance, avgMarks;

    // Input section
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &avgMarks);

    // Checking eligibility
    if (attendance >= 75 && avgMarks >= 40) {
        printf("Eligible for final exams.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}

