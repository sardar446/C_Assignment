#include<stdio.h>
main()
{
	/*7. Find area of Rectangle Formula : A=wl */
	int w, l, formula;
	
	printf("\n\n\t Enter Rectangle Width Value :");
	scanf("%d",&w);
	
	printf("\n\n\t Enter Rectangle Length Value :");
	scanf("%d",&l);
	
	formula=w*l;
	
	printf("\n\n\t Area of Rectangle : %d", formula);
}
