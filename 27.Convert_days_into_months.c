#include<stdio.h>
main()
{
	/*27.Convert days into months*/
	int d;
	float m;
	
	printf("\n\n\t Enter Days : ");
	scanf("%d",&d);
	
    if(d%31==0)
	{
			m=d/31;
		 printf("\n\n\t months :%.1f", m);
	}
	else if(d%29==0)
	{
			m=d/29;
		 printf("\n\n\t This is the February month of leap year  ");
	}
	else
	{
		m=d/30;
		printf("\n\n\t months  :%.1f", m);
	}
}
