/*
name:morris kathurima
reg no: CT100/26260/25
Desription:numbers from 100 down to 50 in descending oder
*/

#include <stdio.h>

int main()
{
    int password;

    do {
        printf("Enter password: ");
        scanf("%d", &password);

        if (password != 1234) {
            printf("Incorrect password. Try again.\n");
        }
    } while (password != 1234);

    printf("Access Granted.\n");

    return 0;
}

