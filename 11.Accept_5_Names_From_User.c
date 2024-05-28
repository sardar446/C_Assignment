#include<stdio.h>
main()
{
	// 11. Accept 5 names from user at run time.
	char a[20][5];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Enter %d User Name : ",i+1);
		scanf("%s",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Enter %d User Name : %s",i+1,a[i]);	
	}
	
	
	
	
}
