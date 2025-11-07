/*
name; morris kathurima
reg no; CT100/G/26260/25
Description; library tracks program which does not delete existing old record when a new one is added
*/



#include <stdio.h>

int main()
 {
    FILE *fp;
    char title[100];

    fp = fopen("borrowed_books.txt", "a"); 
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin); 
    fprintf(fp, "%s", title); 
    fclose(fp);

    printf("Book title successfully stored in borrowed ");
    return 0;
}

