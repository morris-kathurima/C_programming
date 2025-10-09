/*
Name : morris kathurima
reg no: CT100/26260/25
Description :Water Bill Calculator
*/

#include <stdio.h>

int main() {
    int units;
    float bill;

    // Input section
    printf("Enter water units consumed: ");
    scanf("%d", &units);

    // Bill calculation in ksh
    if (units <= 30) {
        bill = units * 20;
    } else if (units <= 60) {
        bill = (30 * 20) + (units - 30) * 25;
    } else {
        bill = (30 * 20) + (30 * 25) + (units - 60) * 30;
    }

    // Display result
    printf("Total water bill: %.2f KES\n", bill);

    return 0;
}

