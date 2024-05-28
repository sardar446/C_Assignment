#include<stdio.h>
main()
{
	/* 25.Accept 5 expense from user and find average of expense */
	char fname[10], lname[10];
	int e1, e2, e3, e4, e5;
	float average;
	
	printf("\n\n\t Enter First Name : ");
	scanf("%s",&fname);
	
	printf("\n\n\t Enter Last Name : ");
	scanf("%s",&lname);
	
	printf("\n\n\t Insurance premium : ");
	scanf(" %d",&e1);
	
	printf("\n\n\t Loan Installment : ");
	scanf(" %d",&e2);
	
	printf("\n\n\t House Rent : ");
	scanf(" %d",&e3);
	
	printf("\n\n\t Health : ");
	scanf(" %d",&e4);
	
	printf("\n\n\t Food Expenses : ");
	scanf(" %d",&e5);
	
	average=(e1+e2+e3+e4+e5)/5;
	
	printf("\n\n\t Average Of Total Expenses : %.2f",average);
}
