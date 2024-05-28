#include<stdio.h>
main()
{
	/* 23. C Program to Reverse a Number Using FOR Loop
	Series Program:
	24. 1 + 2 + 3 + 4 + 5 + ... + n */
	
	int n, i, s=0;
	char c;
	printf("\n\n\t Enter a Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d",i);
		if(i!=n)
		{
		printf(" + ");
		}
		
	}
	
	printf("\n\n\t Enter 'R' for Reverse = ");
	scanf(" %c",&c);
	
	if(c=='R')
	{
		for(i=n;i>=1;i--)
		{
			printf("%d",i);
		if (i>1) 
		{
			printf(" + ");
            }
		}
	}
}
