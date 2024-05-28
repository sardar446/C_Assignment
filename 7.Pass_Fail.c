#include<stdio.h>
main()
{
	//7. Accept marks from user and check pass or fail
	
	int Marks;
	
	printf("\n\n\t Enter Marks : ");
	scanf("%d",&Marks);
	
	if(Marks>=40)
	{
		printf("\n\n\t Congratulations, Pass");
	}
	else
	{
		printf("\n\n\t Fail");
	}
}
