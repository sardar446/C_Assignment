#include<stdio.h>
main()
{
	//11.WAP to find number is even or odd using ternary operator.
	
	int n;
	
	printf("\n\n\t Enter a Number : ");
	scanf("%d",&n);
	
	(n%2==0)? printf("\n\n\t This Number is Even"):printf("\n\n\t This Number is Odd");
}
