#include<stdio.h>
main()
{
	/* 22. Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t */

	int P, R, t, Amount;
	
	printf("\n\n\t Enter Principle Amount : ");
	scanf("%d",&P);
	
	printf("\n\n\t Enter Interest Rate : ");
	scanf("%d",&R);

    printf("\n\n\t Input Yearly Time : ");
	scanf("%d",&t);	
	
	Amount=P*(1+R/100)*t; 
	
	printf("\n\n\t Interest Amount : %d",Amount);
}
