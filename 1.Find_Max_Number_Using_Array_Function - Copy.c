#include<stdio.h>
void max();
main()
{
	/* 1. Write a program to find out the max number from given array using function */
  	
  	max();
	
}
void max()
{
	
	int n, a[n], i, m;
	
	printf("\n\n\t Enter length for Array : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		 printf("\n\t Input a[%d] : ", i);
		 scanf("%d",&a[i]);
	} 
	for(i=0;i<n;i++)
	{
		printf("\n\t a[%d] %d : ", i, a[i]);
	}
	m=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>m)
		{
			m=a[i];
		}
	}

	printf("\n\n\t Maximum Number is : %d",m);
}

