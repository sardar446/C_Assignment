#include<stdio.h>
main()
{
// 10.	WAP to check whether a number is negative, positive or zero.

	int n;
	
	printf("\n\n\t Input Number : ");
	scanf("%d",&n);
	
	if (n>0)
	{
		printf("\n\n\t This Number is Positive");	
	}
	else if (n<0)
	{
		printf("\n\n\t This Number is Negative");
	}
	else
	{
		printf("\n\n\t This is Zero");
	}
}
