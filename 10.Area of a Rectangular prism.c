#include<stdio.h>
main()
{
	/*10.find the area of a rectangular prism formula : A=2(wl+hl+hw)*/
	int w, h, l;
	
	printf("\n\n\t Enter Rectangle Width Value : ");
	scanf("%d",&w);
	
	printf("\n\n\t Enter Rectangle Length Value : ");
	scanf("%d",&l);

    printf("\n\n\t Enter Rectangle Hight Value : ");
	scanf("%d",&h);	
	
	printf("\n\n\t  Area of a Rectangular Prism : %d", w*l*2+l*h*2+h*w*2);
}
