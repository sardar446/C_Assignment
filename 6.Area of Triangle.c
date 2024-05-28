#include<stdio.h>
main()
{
	/* 6. Find area of Triangle Formula : A = 1/2 × b × h */
	float b, h, formula;
	
	printf("\n\n\t Enter Triangle side Value : ");
	scanf("%f",&b);
	
	printf("\n\n\t Enter Triangle Hight Value : ");
	scanf("%f",&h);
	
	formula=b*h/2;
	
	printf("\n\n\t Area of Triangle : %.1f", formula);
}
