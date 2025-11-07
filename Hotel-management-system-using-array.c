/*
name;morris kathurima
reg no ; CT100/G/26260/25
Descrption: its a hotel management system using array to calculate its revenue
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
 {

    // 1D Array
    float revenue[7];
    float total = 0, average;
    int i;
    
    

    printf("=== Weekly Revenue Tracker ===\n");

    // Input  revenue
    for (i = 0; i < 7; i++) {
        printf("Enter revenue for Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7.0;

    printf("\nTotal Weekly Revenue: %.2f\n", total);
    printf("Average Daily Revenue: %.2f\n\n", average);

    
    
    //  2D Array 
    
    int occupancy[5][10];
    int occupied, vacant, floor, room;

    printf("=== Room Occupancy (One Branch) ===\n");

    srand(time(0)); 



    for (floor = 0; floor < 5; floor++) {
        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2;
        }
    }

    
    for (floor = 0; floor < 5; floor++) {
        occupied = vacant = 0;
        for (room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d -> Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    printf("\n");


    // 3D Array 
    
    int chain[3][5][10];
    int branch, totalOccupied = 0;

    printf("=== Multiple Branches Occupancy ===\n");


    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                if (chain[branch][floor][room] == 1)
                    totalOccupied++;
            }
        }
    }

    printf("Total number of occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}

