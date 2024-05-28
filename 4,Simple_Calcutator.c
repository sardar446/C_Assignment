#include<stdio.h>
main()
{
	/* 4.WAP to make simple calculator (operation include Addition, Subtraction,
    Multiplication, Division, modulo) using conditional statement. */
    
    int n1, n2;
    char c, E;
    while(1)
    {
    printf("\n\n\t Enter First Number : ");
    scanf("%d",&n1);
    
    printf("\n\n\t Enter Second Number : ");
    scanf("%d",&n2);
    
    printf("\n\n\t Enter '+' for Addition ");
    printf("\n\n\t Enter '-' for Subtraction ");
    printf("\n\n\t Enter '*' for Multiplication ");
    printf("\n\n\t Enter '/' for Division ");
    printf("\n\n\t Enter '%' for Modulo ");
    
    printf("\n\n\t Input Operator : ");
    scanf(" %c",&c);
    
    switch(c)
    {
    	case '+' : printf("\n\n\t Addition : %d",n1+n2);
    	break;
    	case '-' : printf("\n\n\t Subtraction : %d",n1-n2);
    	break;
    	case '*' : printf("\n\n\t Multiplication : %d",n1*n2);
    	break;
    	case '/' : printf("\n\n\t Division : %d",n1/n2);
    	break;
    	case '%' : printf("\n\n\t Modulo : %d",n1%n2);
    	break;
    	case 'E' : return 0;
    	default  : printf("\n\n\t Invalid Input");
    	break;
	}
	printf("\n\n\t ...............................");
	}
}
