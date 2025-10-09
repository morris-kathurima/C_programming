/*
name:morris kathurima
reg no: CT100/26260/25
Desription:numbers from 100 down to 50 in descending oder
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    // Initialize random seed
    srand(time(0));

    // Generate a random number between 1 and 20
    secretNumber = rand() % 20 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 20.\n");

    // Loop until the user guesses correctly
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != secretNumber);

    return 0;
}

