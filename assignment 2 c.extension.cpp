//simple c program
/*
name:samson kipkirui
reg:CT100/G/26366/25
des:showing my profile
*/
#include <stdio.h>

//main function
int main(int argc,  char**argv)
{
	int height ;
	int weight;
	int contact[20]; // contact stored as string
	
	printf("enter your height:");
	scanf("%d",&height );
	printf("your height is %d\n",height);
	
	printf("enter your conctact:");
	scanf("%d",&contact );
	printf("your conctact is %d\n",contact);
	
	printf("enter your weight:");
	scanf("%d",&weight);
	printf("your weight is %d\n", weight);
	
	return 0;
}
