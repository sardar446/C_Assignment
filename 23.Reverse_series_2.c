#include<stdio.h>
main()
{
	/*
	23. C Program to Reverse a Number Using FOR Loop
	Series Program:
	25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n) */
	
	int n, i;
	char a;
	
	printf("\n\n\t Enter a Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("(%d*%d)",i,i);
		if(i!=n)
		{
			printf(" + ");
		}
	}
	printf("\n\n\t Press 'R' for Reverse Series : ");
	scanf(" %c",&a);
	
	if(a=='R')
	{
		for(i=n;i>=1;i--)
		{
			printf("(%d*%d)",i,i);
			if(i!=1)
			{
				printf(" + ");
			}
		}	
	}
}
