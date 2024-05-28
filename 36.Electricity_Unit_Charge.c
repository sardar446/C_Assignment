#include<stdio.h>
main()
{
	/*36.Write a C program to input electricity unit charges and calculate total
	electricity bill according to the given condition:
	For first 50 units Rs. 0.50/unit
	For next 100 units Rs. 0.75/unit
	For next 100 units Rs. 1.20/unit
	For unit above 250 Rs. 1.50/unit
	An additional surcharge of 20% is added to the bill */
	
	float bill, unit;
	
	printf("\n\n\t Enter Unit : ");
	scanf("%f",&unit);
	
	if(unit<=50)
	{
		bill=unit*0.50;
	}
	else if(unit>50 && unit<=150)
	{
		bill=unit*0.75;
	}
	else if(unit>150 && unit<=250)
	{
		bill=unit*1.20;
	}
	else
	{
		bill=unit*1.50+unit*0.20;	
	}
	
	
	printf("\n\n\t Electricity Bill : %.2f",bill);
}
