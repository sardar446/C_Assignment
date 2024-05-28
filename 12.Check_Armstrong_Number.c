#include<stdio.h>
main()
{
	//12. Program of Armstrong Number in C Using For Loop & While Loop
	
	int n, r, sum=0, n1;
	
	printf("\n\n\t Enter Number : ");
	scanf("%d",&n);
	
	n1=n;
	while(n!=0)
	{
		r=n%10;
		sum+=r*r*r;	
	}
	if(n1==n)
	{
		printf("\n\n\t Armstrong Number.......");
	}
	else
	{
		printf("\n\n\t Not Armstrong Number.......");
	}
}
