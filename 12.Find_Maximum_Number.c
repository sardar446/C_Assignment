#include<stdio.h>
main()
{
	//12.WAP to find maximum number among 3 numbers using ternary operator.
	
	int n1, n2, n3 ,M;
	
	printf("\n\n\t Enter First Number : ");
	scanf("%d",&n1);
	
	printf("\n\n\t Enter Second Number : ");
	scanf("%d",&n2);
	
	printf("\n\n\t Enter Third Number : ");
	scanf("%d",&n3);
	
	M=(n1>n2) ? ((n1>n3) ? n1 : n2) : ((n2>n3) ? n2 : n3);
	
	printf("\n\n\t %d is Maximum ",M);
}
