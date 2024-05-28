#include<stdio.h>
main()
{
	/* 14.Perform 2D matrix array*/
	int i,j,a[20][20] ,rows,cols;
	
		printf("\n\n\t Input the array Rows  : ");
			scanf(" %d",&rows);
			
		printf("\n\n\t Input the array Cols  : ");
			scanf(" %d",&cols);
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("\n\n\t Input the array a[%d][%d] : ",i,j);
			scanf(" %d",&a[i][j]);
			
			printf("\n");
		}
	}
	
	for (i=0;i<rows;i++)
	{
		for(j=0;j<cols;j
		++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
}
