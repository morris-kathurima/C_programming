/*
name;morris kathurima
reg no;CT100/G/26260/25
Description; a program  that reads all the student records and displays them on the screen
*/




#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int regNo;
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;

    fp = fopen("results.dat", "rb"); 
    if (fp == NULL) {
        printf("Error opening file! (check if the data exist)\n");
        return 1;
    }





    printf("Studentexamination Records:\n");
    printf("-------------------------------\n");
    while (fread(&s, sizeof(struct Student), 1, fp) == 1) {
        printf("Name: %s\n", s.name);
        printf("Reg No: %d\n", s.regNo);
        printf("Marks: %.2f\n", s.marks);
        printf("-------------------------------\n");
    }

    fclose(fp);
    return 0;
}

