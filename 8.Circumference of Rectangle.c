#include<stdio.h>
main()
{
	/* 8. Find circumference of Rectangle formula : 2(w+l) */
	int w, l, formula;
	
	printf("\n\n\t Enter Rectangle Width Value :");
	scanf("%d",&w);

	printf("\n\n\t Enter Rectangle Length Value :");
	scanf("%d",&l);
		
	formula=w*2+l*2;
	
	printf("\n\n\t Circumference of Rectangle : %d", formula);
}
