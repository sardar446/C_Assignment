#include<stdio.h>
main()
{
	//9. Write a program make a summation of given number (E.g., 1523 Ans: -11)
	
	int n, i, r, rn=0;
	printf("\n\n\t Enter Number : ");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		r=n%10;
		rn += r;
		n /= 10;
	}
	printf("\n\n\t summition of Numbers : %d",rn);
}
