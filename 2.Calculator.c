#include<stdio.h>
main()
{
	/* 2. Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo) */

	int n1, n2;
	char n3;
	printf("\n\n\t Enter n1 = ");
	scanf("%d",&n1);
	
	printf("\n\n\t Enter n2 = ");
	scanf("%d",&n2);
	
	printf("\n\n\tpress '+' for Addition");
	printf("\n\n\tpress '-' for Subtraction");
	printf("\n\n\tpress '*' for Multiplication");
	printf("\n\n\tpress '/' for Division");
    printf("\n\n\tpress '%' for Modulo");
		
	printf("\n\n\t Input Symbol = ");
	scanf(" %c",&n3);
	
	switch(n3)
	{
		case '+' : printf("\n\n\t Addition =  %d ", n1+n2);
		break;
		case '-' : printf("\n\n\t Subtraction = %d", n1-n2);
		break;
		case '*' : printf("\n\n\t Multiplication = %d", n1*n2);
		break;
		case '/' : printf("\n\n\t Division = %d", n1/n2);
		break;
        case '%' : printf("\n\n\t Modulo = %d", n1%n2);
		break;
	    default : printf("\n\n\t Invlid Input, Try again.......");
	    break;
	}
} 
