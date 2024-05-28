#include<stdio.h>
void cal();
main()
{
	/* 2. WAP of Addition, Subtraction, Multiplication and Division using Switch
	case.(Must Be Menu Driven) */
	cal();
	return 0;
}
void cal()
{
	float n1, n2;
	char n3;
	
	while(1)
	{
		
	printf("\n\n\t Enter n1 = ");
	scanf("%f",&n1);
	
	printf("\n\n\t Enter n2 = ");
	scanf("%f",&n2);
	
	printf("\n\n\t.......................");
	printf("\n\n\t press '+' for Addition");
	printf("\n\n\t press '-' for Subtraction");
	printf("\n\n\t press '*' for Multiplication");
	printf("\n\n\t press '/' for Division");
	printf("\n\n\t press 'E' for Exit");
	
	printf("\n\n\t Input Symbol = ");
	scanf(" %c",&n3);
	
	switch(n3)
	{
		case '+' : printf("\n\n\t Addition =  %.2f ", n1+n2);
		break;
		case '-' : printf("\n\n\t Subtraction = %.2f", n1-n2);
		break;
		case '*' : printf("\n\n\t Multiplication = %.2f", n1*n2);
		break;
		case '/' : printf("\n\n\t Division = %.2f", n1/n2);
		break;
		case 'E' : return;
		break;
	    default : printf("\n\n\t Invlid Input Try again...........");
	    break;
	}
	printf("\n\n\t.......................");
	}
}
