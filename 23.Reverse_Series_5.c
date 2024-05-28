#include<stdio.h>
main()
{
	/* 23. C Program to Reverse a Number Using FOR Loop
	Series Program: 
	
	28. 1 2 3 6 9 18 27 54... */
	
	int a=1, b=2, i, n, a1=1, b1=1;
	char c;
	
	printf("\n\n\t Input Number for Series : ");
	scanf("%d",&n);
	
	printf(" %d %d ",a,b);
	for(i=2;i<=n;i++)
	{	
		a1=a*3;
		b1=b*3;
		printf("%d %d ",a1,b1);
		a=a1;
		b=b1;
	}
	
	printf("\n\n\t Enter R for Reverse Series : ");
	scanf(" %c",&c);
	
	if(c=='R')
	{
        	printf(" %d %d ",b,a);
		 for (i>n;i>2;i--) 
		 {
	            a1 = a / 3;
	            b1 = b / 3;
	            printf("%d %d ", b1, a1);
	            a = a1;
	            b = b1;
        	}
	
	}
}
