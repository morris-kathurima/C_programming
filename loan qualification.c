#include <stdio.h>
int main()
{
	int age ;
	float income;
	
	//Get user input
	printf("enter your age :");
	scanf("%d",&age);
	
	printf("enter your annual income (in sh): ");
	scanf("%f",&income);
	
	//check laon qualification
	if (age >=21 && income >=21000){
		printf("congratulations , you qualify for a loan .\n");
	} else{
		printf("Unfortunately , we are unable to offer you a loan at this time .\n");
	}
	return 0;
	}

