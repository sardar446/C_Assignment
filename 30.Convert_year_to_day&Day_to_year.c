#include<stdio.h>
main()
{
	//30.WAP to convert years into days and days into years
	
	float y, d;
	char c;
	
	printf("\n\n\t Ask Year Enter : Y");
	printf("\n\n\t Ask Day Enter : D");

	printf("\n\n\t Input Your choice : ");
	scanf("%c",&c);
	
	
	if(c=='D')
	{
		printf("\n\n\t Enter Year : ");
		scanf("%f",&y);
		d=y*365;
		printf("\n\n\t Converted Days : %.0f",d);
	}
	else if (c=='Y')
	{
		printf("\n\n\t Enter Days : ");
	    scanf("%f",&d);	
	    y=d/365;
	    printf("\n\n\t Converted Years : %.2f",y);
	}
	else
	{
		printf("\n\n\t Invalid Input ");	
	}
//	printf("\n\n\t Converted Days : %.0f",D);
}
