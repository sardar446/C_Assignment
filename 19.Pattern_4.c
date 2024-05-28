#include<stdio.h>
main()
{
	/*19. Patterns:
 4.	A 
	A B
	A B C
	A B C D
	A B C D E */
	
	int r, c;
	char ch='A';
	
	for(r=1;r<=5;r++)
	{
		
		for(c=0;c<r;c++)
		{
			printf(" %c",ch+c);
		}
		printf("\n");
	}
}
