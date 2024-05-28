#include<stdio.h>
main()
{
	//29.Convert minutes into seconds and hours
	
	float M, S, H;
	
	printf("\n\n\t Enter Minuts : ");
	scanf("%f",&M);
	
	S=M*60;
	H=M/60;
	
	printf("\n\n\t Converted Seconds : %.0f",S);
	printf("\n\n\t Converted Hours : %.2f",H);
}
