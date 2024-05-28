#include<stdio.h>
main()
{
	//17.Write a C program to check whether a triangle can be formed with the given
	//values for the angles.
	int a1, a2, a3;
	
	printf("\n\n\t Enter First Angle : ");
	scanf("%d",&a1);
	
	printf("\n\n\t Enter Second Angle : ");
	scanf("%d",&a2);
	
	printf("\n\n\t Enter Third Angle : ");
	scanf("%d",&a3);
	
	if(a1+a2+a3==180)
	{
		printf("\n\n\t Triangle Can Be Formed");
	}
	else
	{
		printf("\n\n\t Triangle Can't Be Formed");
	}
}
