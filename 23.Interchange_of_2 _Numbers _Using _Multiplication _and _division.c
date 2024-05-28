#include<stdio.h>
main()
{
	/* 23.WAP to calculate swap 2 numbers with using of multiplication and division.*/
	int n1, n2;
	
	printf("\n\n\t Enter the First Number : ");
	scanf("%d",&n1);
	
	printf("\n\n\t Enter the Second Number : ");
	scanf("%d",&n2);
	
	printf("\n\n\t............................");
	printf("\n\n\t Before Swap First Number : %d",n1);
	printf("\n\n\t Before Swap Second Number : %d",n2);
	
	n1=n1*n2;
	n2=n1/n2;
	n1=n1/n2;

    printf("\n\n\t............................");
	printf("\n\n\t After Swap First Number : %d",n1);
	printf("\n\n\t After Swap Second Number : %d",n2);
}
