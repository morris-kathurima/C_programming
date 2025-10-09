/*
name:morris kathurima
reg no: CT100/26260/25
Desription:numbers from 100 down to 50 in descending oder
*/




#include <stdio.h>

int main() {
    // This program uses a for loop to print all integers from 100 down to 50,
    // with each number on a new line.

    printf("--- Descending Count: 100 to 50 ---\n");

    // The for loop structure:
    // 1. Initialization: int i = 100 (Start at 100)
    // 2. Condition: i >= 50 (Continue as long as i is 50 or greater)
    // 3. Iteration: i-- (Decrement i by 1 in each step)
    for (int i = 100; i >= 50; i--) {
        // Print the current value of i, followed by a newline character (\n)
        printf("%d\n", i);
    }

    printf("--- Count Complete ---\n");

    return 0;
}

