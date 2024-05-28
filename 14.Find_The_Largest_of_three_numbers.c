#include<stdio.h>
main()
{
	// 14.WAP to find the largest of three numbers.
		int n1, n2, n3 ,M;
		
		printf("\n\n\t Enter First Number : ");
	scanf("%d",&n1);
	
	printf("\n\n\t Enter Second Number : ");
	scanf("%d",&n2);
	
	printf("\n\n\t Enter Third Number : ");
	scanf("%d",&n3);
	
	if(n1>n2)
	{
		if(n1>n3)
		{
			printf("\n\n\t %d is Largest ",n1);
		}
		else
		{
			printf("\n\n\t %d is Largest ",n3);

			}	
	}
	else 
	{
		if(n2>n3)
		{
			printf("\n\n\t %d is Largest ",n2);
		}
		else
		{
			printf("\n\n\t %d is Largest ",n3);
		}
	}
}
