#include<stdio.h>
main()
{
	/*19. Patterns:
 1.	1 
	1 0
	1 0 1
	1 0 1 0
	1 0 1 0 1 */
	
	int r, c;
	
	for(r=1;r<=5;r++)
	{
		
		for(c=1;c<=r;c++)
		{
//			printf(" 0");
			if(c%2!=0)
			{
			printf(" 1");	
			}
			else
			{
				printf(" 0");
			}
		}
		printf("\n");
	}
}
