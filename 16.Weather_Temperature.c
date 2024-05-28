#include<stdio.h>
main()
{
	/*16.Write a C program to read temperature in centigrade and display a suitable
	message according to the temperature state below:
	Temp < 0 then Freezing weather
	Temp 0-10 then Very Cold weather
	Temp 10-20 then Cold weather
	Temp 20-30 then Normal in Temp
	Temp 30-40 then Its Hot
	Temp >=40 then Its Very Hot */

	float c;
	
	printf("\n\n\t Enter Weather Temperature : ");
	scanf("%f",&c);
	
	if (c<0)
	{
		printf("\n\n\t Freezing Weather");
	}
	else if (c>=0 && c<10)
	{
		printf("\n\n\t Very Cold Weather");
	}
	else if (c>=10 && c<20)
	{
		printf("\n\n\t Cold Weather");
	}
	else if (c>=20 && c<30)
	{
		printf("\n\n\t Normal Temperature");
	}
	else if (c>=30 && c<40)
	{
		printf("\n\n\t Hot Weather");
	}
	else
	{
		printf("\n\n\t Weather is Very Hot");
	}
}
