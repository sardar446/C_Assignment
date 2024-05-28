#include<stdio.h>
main()
{
	//18. Write a C program to calculate profit and loss on a transaction.
	int cost_price, selling_price, profit, loss;
	
	printf("\n\n\t Enter a Cost Price : ");
	scanf("%d",&cost_price);
	
	printf("\n\n\t Enter a Selling Price : ");
	scanf("%d",&selling_price);
	
	profit=selling_price-cost_price;
	loss=cost_price-selling_price;
	
	if(selling_price>cost_price)
	{
		printf("\n\n\t Profit : %d",profit);
	}
	else
	{
		printf("\n\n\t Loss : %d",loss);
	}
}
