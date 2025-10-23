/*
 name:morris kathurima
 reg no: CT100/G/26260/25
 Description:calculating electric bill
 
 */

 #include <stdio.h>

float calculateElectricBill(int units) 
 {
    float bill = 0;
// number of electric bill and the calculation
    if (units <= 100)
        bill = units * 10;
    else if (units <= 200)
        bill = (100 * 10) + (units - 100) * 15;
    else
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20;

    return bill;
}

int main() {
    int units = 250;
    printf("Total Bill = KSh. %.2f\n", calculateElectricBill(units));
    return 0;
}

