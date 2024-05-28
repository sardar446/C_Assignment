#include<stdio.h>
main()
{
	//4. WAP to print table up to given numbers
	
	int n, i;
	
	printf("\n\n\t Enter a Number for want table : ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("\n\n\t %d * %d = %d", n, i, n*i);
	}
}
