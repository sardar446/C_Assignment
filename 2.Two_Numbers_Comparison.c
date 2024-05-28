#include<stdio.h>
main()
{
	/* 2.Write a C program to read the value of an integer m and display the value of 
	 n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0. */
	
	int n, m;
	
	printf("\n\n\t Enter a Number : ");
	scanf("%d",&m);
	
	if(m>0)
	{
		printf("\n\n\t n = 1");
	}
	else if(m==0)
	{
		printf("\n\n\t n = 0");
	}
	else
	{
		printf("\n\n\t n = -1");
	}
}
