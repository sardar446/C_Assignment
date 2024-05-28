#include<stdio.h>
main()
{
	/* 12.Accept number of students from user. I need to give 5 apples to each
student. How many apples are required?*/

	int student, requirment;
	
	printf("\n\n\t Enter Number Of Student :");
	scanf("%d",&student);
	
	requirment=5*student;
	
	printf("\n\n\t Total Apple's Requirement : %d", requirment);
}
