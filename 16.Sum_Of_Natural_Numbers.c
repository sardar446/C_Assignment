#include<stdio.h>
main()
{
	// 16. Calculate the Sum of Natural Numbers Using the While Loop
	
	int n, i, sum=0;
	
	printf("\n\n\t Enter the value of Numbers : ");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("\n\n\t Sum Of Natural Numbers : %d",sum);
}
