/*
name;morris kathurima
reg no; CT100/G/26260/25
Description; a program that Reads all transactions from the file Calculates and displays the total sales for the day and 
Ensures the file is properly closed after reading.
*/



#include <stdio.h>

int main() 
{
    FILE *fp;
    float amount, total = 0;

    fp = fopen("sales.txt", "r"); 
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }


    while (fscanf(fp, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(fp);

    printf("Total sales for the day: %.2f\n", total);
    return 0;
}

