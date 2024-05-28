#include<stdio.h>
main()
{
	/*20.Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary.*/

	float salary, premium, RS, emi, SR; //salary= monthly salary, premium=Insurance Premium 10%, 
							//RS=Salary remaining after premium reduction, emi=10% Loan Installment,
							// SR=Salary after all expenses redution  (var. declaration)
	
	printf("\n\n\t Enter a Salary = ");
	scanf("%f",&salary);
	
	premium=salary/10;
	
	printf("\n\n\t Insurance Premium Amount : %.2f",premium);
	
	RS=salary-premium;
	printf("\n\n\t Salary remaining after premium reduction : %.2f",RS);
	
	emi=RS/10;
	printf("\n\n\t Loan Installmennt Amount : %.2f",emi);
	
	SR=RS-emi;
	printf("\n\n\t Salary after all expenses redution : %f",SR);
}
