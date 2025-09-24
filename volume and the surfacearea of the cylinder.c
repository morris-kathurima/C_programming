/*
name:morris kathurima
reg no:CT100/G/26260/25
*/
#include <stdio.h>
#define  PI 3.1416

int main() 
{
	float radius,height,volume,surfaceArea;
	
	// get user input
	printf("enter the radius of the cylinder : ");
	scanf("%f" ,&radius);
	
	printf("enter the height of the cylinder :");
	scanf("%f",&height);
	
	//calculations
	volume = PI * radius * height;
	surfaceArea = (2*PI*radius) + (2*PI*radius*height);
	//Display results
	printf("volume of the cylinder = %.2f\n",volume);
	printf("surface area of the cylinder = %.2f\n",surfaceArea);
	
	return 0;
}
