#include<stdio.h>
main()
{
	//13.WAP to find minimum number among 3 numbers using ternary operator.
	int n1, n2, n3, M;
	
	printf("\n\n\t Enter First Number : ");
	scanf("%d",&n1);
	
	printf("\n\n\t Enter Second Number : ");
	scanf("%d",&n2);
	
	printf("\n\n\t Enter Third Number : ");
	scanf("%d",&n3);
	
	M=(n1<n2) ? ((n1<n3) ? n1 : n3) : ((n2<n3) ? n2 : n3);
	
	printf("\n\n\t %d is Minimum",M);
}
