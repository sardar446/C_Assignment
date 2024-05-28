#include<stdio.h>
main()
{
	/* 17.Calculate 5 numbers from user and calculate number of even and odd using
	  of while loop */
	  
	  int n, i, e=0, o=0;
	  
	  i=1;
	  while(i<=5)
	  {
	  	printf("\n\n\t Enter a Number %d : ",i);
	  	scanf("%d",&n);
	  	
	  	if(n%2==0)
	  	{
	  		e++;
		}
		  else
		  {
		  	o++;
		  }
		  i++;
	  }
	  
	  printf("\n\n\t Even Numbers : %d",e);
	  printf("\n\n\t Odd Numbers : %d",o);
}
