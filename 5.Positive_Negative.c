#include<stdio.h>
main()
{
	//5. Check Number Is Positive or Negative
	
	int n;
	
	printf("\n\n\t Input a Number : ");
	scanf("%d",&n);
	
	if(n>0)
	{
		printf("\n\n\t Positive ");
	}
	else if (n<0)
	{
		printf("\n\n\t Nagetive");
	}
	else 
	{
		printf("\n\n\t Zero");
	}
}
