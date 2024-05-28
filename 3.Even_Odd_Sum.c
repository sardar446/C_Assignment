#include<stdio.h>
main()
{
	/* 3. WAP to take 10 no. Input from user find out below values
	a. How many Even numbers are there
	b. How many odd numbers are there
	c. Sum of even numbers
	d. Sum of odd numbers */

	int a[10], i, even=0, odd=0, esum=0, osum=0;
	
	for(i=0;i<10;i++)
	{
		printf("\n\n\t Enter a Number a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("\n\n\t a[%d] : %d",i,a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			even++;
			esum += a[i];
		}
		else
		{
			odd++;
			osum += a[i];
		}
	}
	printf("\n\n\t Even Numbers are : %d",even);
	printf("\n\n\t Odd Number are : %d",odd);
	printf("\n\n\t Sum Of Even : %d",esum);
	printf("\n\n\t Sum Of Odd : %d",osum);	
}
