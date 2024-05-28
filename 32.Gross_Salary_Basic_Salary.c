#include<stdio.h>
main() 
{
	/*32.Write a C program to input basic salary of an employee and calculateits
	Gross salary according to following:
	Basic Salary <= 10000 : HRA = 20%, DA = 80%
	Basic Salary <= 20000 : HRA = 25%, DA = 90%
	Basic Salary > 20000 : HRA = 30%, DA = 95% */
	
    float basicSalary, grossSalary, hra, da;

    printf("\n\n\t Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    // Calculate HRA and DA based on basic salary
    if (basicSalary <= 10000) 
	{
        hra = 0.2 * basicSalary;
        da = 0.8 * basicSalary;
    } 
	else if (basicSalary <= 20000)
	{
        hra = 0.25 * basicSalary;
        da = 0.9 * basicSalary;
    } 
	else
	{
        hra = 0.3 * basicSalary;
        da = 0.95 * basicSalary;
    }

    // Calculate gross salary
    grossSalary = basicSalary + hra + da;

    // Print the gross salary
    printf("\n\n\t Gross Salary: %.2f", grossSalary);
}

