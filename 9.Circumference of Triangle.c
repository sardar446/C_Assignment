#include<stdio.h>
main()
{
	/* 9. Find circumference of Triangle formula : triangle = a + b + c */
	int a, b, c, formula;
	
	printf("\n\n\t Triangle First Side Value : ");
	scanf("%d",&a);

    printf("\n\n\t Triangle Second Side Value : ");
	scanf("%d",&b);
	
	printf("\n\n\t Triangle Third Side Value : ");
	scanf("%d",&c);	
	
	formula=a+b+c;
	
	printf("\n\n\t Circumference of Triangle : %d", formula);
}
