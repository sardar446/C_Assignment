#include<stdio.h>
main()
{
		/*19. Patterns:
 3.	1 
	2 3
	4 5 6
	7 8 9 10
	11 12 13 14 15 */
	
	int r, c, n=1;
	
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf(" %d",n);
			n++;
		}
		printf("\n");
	}
}
