#include<stdio.h>
main()
{
	// 8. WAP to accept the height of a person in centimeters and categorize the
//person according to their height.

	int height_cm;
	
	printf("\n\n\t Enter Your Height in Centemeter : ");
	scanf("%d",&height_cm);
	
	if(height_cm<=150)
	{
		printf("\n\n\t Your Height is Short");
	}
	else if(height_cm>150 && height_cm<=170)
	{
		printf("\n\n\t Your Height is Average");
	}
	else if (height_cm>170 && height_cm<=190)
	{
		printf("\n\n\t Your Height is Tall");
	}
	else
	{
		printf("\n\n\t Your Height is Very Tall");
	}
}
