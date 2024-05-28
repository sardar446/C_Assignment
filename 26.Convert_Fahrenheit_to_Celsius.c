#include<stdio.h>
main()
{
	/*26.Convert temperature Fahrenheit to Celsius*/
	float f=0,c;
	
	printf("\n\n\t Enter Fahrenheit temperature : ");
	scanf("%f.2",&f);
	
	c=(f-32)*0.556;
	
	printf("\n\n\t Converted Celsius temperature : %.2f",c);
}
