#include<stdio.h>
main()
{
	/*21.Accept 2 numbers from user and swap 2 numbers with using 3rd variable
and without using 3rd variable. */
	int n1, n2, n3; //var. declaration
	
	printf("\n\n\t Enter First Number : ");
	scanf("%d",&n1);
	
	printf("\n\n\t Enter Second Number : ");
	scanf("%d",&n2);
	
	printf("\n\n\t .........................");
	printf("\n\n\t Before Swap First Number : %d",n1);
	printf("\n\n\t Before Swap Second Number : %d",n2);
	
	n3=n1;
	n1=n2;
	n2=n3;
	
	printf("\n\n\t .........................");
	printf("\n\n\t After Swap First Number : %d",n1);
	printf("\n\n\t After Swap Second Number : %d",n2);
}
