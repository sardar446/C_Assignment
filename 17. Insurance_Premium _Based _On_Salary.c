#include <stdio.h>
main() {
	//17. Calculate person’s insurance premium based on salary
	
    float salary, premium;
    
    printf("Enter your salary: ");
    scanf("%f", &salary);
    
    premium = 0.1 * salary; // For example, 10% of salary.
    
    printf("Your insurance premium based on your salary is: %.2f", premium);
    
}

