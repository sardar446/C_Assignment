#include<stdio.h>
main()
{
	/* 19. Pattern
	
	6.         *
	         * * *
	       * * * * *
	     * * * * * * *
	   * * * * * * * * *     
	   
	   */
	   
	int r, c;
	
//	Left side Pattern
	for(r=1;r<=5;r++)//
	{
		for(c=1;c<=5-r;c++)
		{
			printf("  ");
		}
		for(c=1;c<=2*r-1;c++)
		{
			printf(" *");
		}
		printf("\n");
      }
}

