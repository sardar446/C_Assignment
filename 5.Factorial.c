#include<stdio.h>
main()
{
	// 5. WAP to print factorial of given number
	
	int n, i, f=1;
	
	printf("\n\n\t Enter Number for Factorial : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("\n\n\t Factorial : %d",f);
}
