#include<stdio.h>
main()
{
	// 7.WAP to print number in reverse order e.g.: number = 64728 ---> reverse=82746
	
	int n,r,rn=0;
	
	printf("\n\t Enter the Number : ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		r=n%10;
		rn=rn*10+r;
		
		n=n/10;
	}
	printf("\n\n\t Reverse Number : %d",rn);  
}
