/*
name:morris kathurima
reg no:CT100/G/26260/25
Description:converting fahrenheit to celsius
*/


#include <stdio.h>
//converting fahrenheit to celsius
float convertToCelsius(float fahrenheit)
 {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    float F = 98.6;
    printf("%.2f°F = %.2f°C\n", F, convertToCelsius(F));
    return 0;
}

