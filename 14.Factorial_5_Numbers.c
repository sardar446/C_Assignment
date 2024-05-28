#include<stdio.h>
main()
{
	//14.Accept 5 numbers from user and find those numbers factorials
	
	int n, i, j, fact[5];
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Enter a Numver for Factorial : ");
		scanf("%d",&n);
		fact[i]=1;
		for(j=1;j<=n;j++)		
		{
			fact[i] *= j;
		}
	}
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Factorial : %d", fact[i]);
	}
}
