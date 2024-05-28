#include<stdio.h>
main()
{
	// 6. WAP to print Fibonacci series up to given numbers
	
	int i, a=0, b=1, c, n;
	
	printf("\n\n\t Enter a Number want to Fibonacci Series : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		c=a+b;
	printf("\n\n\t Series : %d",a);
		a=b;
		b=c;	
	}
}
