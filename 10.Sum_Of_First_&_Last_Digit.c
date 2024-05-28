#include<stdio.h>
main()
{
	/*10.Write a program you have to make a summation of first and last Digit. (E.g.,
	1234 Ans: -5)*/
	
	int n, sum=0, l, f;
	
	printf("\n\n\t Enter a Number : ");
	scanf("%d",&n);
	f=n;
	while(f>=10)
	{
		f /= 10;
	}
		l=n%10;
		
		sum = f+l;
	printf("\n\n\t sum : %d",sum);	
}
