#include<stdio.h>
main()
{
	//15.Calculate sum of 10 numbers using of while loop
	
	int n, sum=0, i;
	
	i=1;
	while(i<=10)
	{
	printf("\n\n\t Enter a Number %d : ",i);
	scanf("%d",&n);
		sum+=n;
		i++;
	}
	printf("\n\n\t Sum : %d",sum);
}
