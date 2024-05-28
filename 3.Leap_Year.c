#include<stdio.h>
main()
{
	//3.WAP to check if the given year is a leap year or not.
	int year;
	
	printf("\n\n\t Enter Year : ");
	scanf("%d",&year);
	
	if(year%4==0 || year%400==0)
	{
		printf("\n\n\t Leap Year");
	}
	else
	{
		printf("\n\n\t Not Leap Year");
	}
}
