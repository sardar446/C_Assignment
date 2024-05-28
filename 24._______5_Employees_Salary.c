#include<stdio.h>
main()
{
	/*24.Accept 5 employees name and salary and count average and total salary.*/
	
	char n1[10], n2[10], n3[10], n4[10], n5[10];
	int s1, s2, s3, s4, s5, total;
	float average;
	
	printf("\n\n\t Input the First Employee Name : ");
	scanf("%s",&n1);
	printf("\n\n\t Enter First Employee Salary : ");
	scanf("%d",&s1);
	
	printf("\n\n\t Input the Second Employee Name : ");
	scanf("%s",&n2);
	printf("\n\n\t Enter Second Employee Salary : ");
	scanf("%d",&s2);
	
	printf("\n\n\t Input the Third Employee Name : ");
	scanf("%s",&n3);
	printf("\n\n\t Enter Third Employee Salary : ");
	scanf("%d",&s3);
	
	printf("\n\n\t Input the Fourth Employee Name : ");
	scanf("%s",&n4);
	printf("\n\n\t Enter Fourth Employee Salary : ");
	scanf("%d",&s4);
	
	printf("\n\n\t Input the Fifth Employee Name : ");
	scanf("%s",&n5);
	printf("\n\n\t Enter Fifth Employee Salary : ");
	scanf("%d",&n5);
	
	printf("\n\n\t................................");
	total=s1+s2+s3+s4+s5;
	average=total/5;
	
	printf("\n\n\t Total Of All Employee's Salary : %d",total);
	printf("\n\n\t Average Of Total Salary : %.2f",average);
}
