#include<stdio.h>
main()
{
	/*28.Convert years into days and months*/
	float y, m, d;
	
	printf("\n\n\t Enter Year : ");
	scanf("%f",&y);
	
		d=y*365;
		m=y*12;
		
			printf("\n\n\t Months : %.0f",m);
	        printf("\n\n\t Days : %.0f",d);
}
