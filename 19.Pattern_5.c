#include<stdio.h>
main()
{
	/*19. Patterns:
	
5.	*
	* * 
	* * *
	* * * *
	* * * * *
	* * * * * *
	* * * * *
	* * * *
	* * *
	* *
	*
  		*/
	int r, c;
//	 Uper Half Pattern
	for(r=1;r<=6;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf(" *");
		}
		printf("\n");
	}
	
//	Lower Half Pattern
	for(r=5;r>=1;r--)
	{
			for(c=1;c<=r;c++)
		{
			printf(" *");
		}
		printf("\n");
	}
}

