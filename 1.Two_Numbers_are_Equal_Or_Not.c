#include<stdio.h>
main()
{
	//1. Write a C program to accept two integers and check whether they are equal or not
	
	int n1, n2;
	
	printf("\n\n\t Enter First Number : ");
	scanf("%d",&n1);
	
	printf("\n\n\t Enter Second Number : ");
	scanf("%d",&n2);
	
	if(n1==n2)
	{
		printf("\n\n\t Numbers are Equal");
	}
	else
	{
		printf("\n\n\t Numbers are Not Equal");
	}
}
