/*
 name:morris kathurima
 reg no: CT100/G/26260/25
 Description:calculatefare
 
 */


#include <stdio.h>

float calculateFare(float distance)
 {
    return distance * 50;
}

int main() {
    float distance = 10;
    printf("Total Fare = KSh. %.2f\n", calculateFare(distance));
    return 0;
}

