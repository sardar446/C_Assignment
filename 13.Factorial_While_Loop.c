#include<stdio.h>
main()
{
	//13.calculate the Factorial of a Given Number using while loop
	int n, i, fact=1;
	
	printf("\n\n\t Enter a Number For Factorial : ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		fact *= i;	
		i++;
	}
	printf("\n\n\t Factorial : %d", fact);
//	for(i=1;i<=n;i++)
//	{
//		fact *= i;		
//	}
//	printf("\n\n\t Factorial : %d", fact);
}



