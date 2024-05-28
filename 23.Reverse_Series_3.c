#include <stdio.h>

int main() 
{
	/* 23. C Program to Reverse a Number Using FOR Loop
	Series Program:
	
	26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n) */
    int n, i, j;
    char c;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
  
	for ( i=1;i<=n;i++)
	{
	     for ( j=1;j<=i;j++) 
		{
	            printf("%d",j);
	            if(j<i)
			{
	                	printf("+");
	            }
	      }
	      if (i<n) 
		{
	            printf(" + ");
	      }
	}
	
	printf("\n\n\t Press 'R' for Reverse Series : ");
	scanf(" %c",&c);
	
	if(c=='R')
	{
		for ( i=n;i>=1;i--)
	{
	        for ( j=1;j<=i;j++) 
		{
	            printf("%d",j);
	            if(j<i)
			{
	                	printf("+");
	            }
	      }
	       if (i>1) 
		  {
	            printf(" + ");
	        }
	}
	}
}
