#include<stdio.h>
main()
{
	/*22. Accept 3 numbers from user using while loop and check each numbers
	palindrome */
	
	int i, n, original, r, s=0;
	
	for(i=1;i<=3;i++)
	{
		printf("\n\n\t Enter a Number : ");
		scanf("%d",&n);
		
		original=n;
		while(n>0)
		{
			r=n%10;
			s=r+(s*10);
			n = n/10;
		}
		if(original==s)
		{
			printf("\n\n\t Palindrome Number");
		}	
		else
		{
			printf("\n\n\t Not Palindrme Number");
		}
	}
		
}
