#include<stdio.h>
main()
{
		/*19. Patterns:
 2.	A 
	B C
	D E F
	G H I J
	K L M N O */
	
	int r, c;
	char ch='A';
	
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf(" %c",ch);
			ch++;
		}
		printf("\n");
	}
}
