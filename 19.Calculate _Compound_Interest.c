#include<stdio.h>
main()
{
	/* 19.Calculate compound interest */
	int p;
	float r, CI;
	
	printf("\n\n\t Input Principle Amount : ");
	scanf("%d",&p);
	
	printf("\n\n\t Enter Interest Rate : ");
	scanf("%f",&r);
	
	CI=p*(r+100)/100;
	
	printf("\n\n\t Compound Interest : %.2f",CI);
}
