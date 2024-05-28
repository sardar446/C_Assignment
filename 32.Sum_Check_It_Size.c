#include<stdio.h>
main()
{
	int n1, n2, sum=0;
	
	printf("\n\n\t Enter First Number : ");
	scanf("%d",&n1);
	
	printf("\n\n\t Enter Second Number : ");
	scanf("%d",&n2);
	
	sum=n1+n2;
	printf("\n\n\t Size of Sum : %d bytes", sizeof(sum));
	
}
