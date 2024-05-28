#include<stdio.h>
main()
{
	// 34. Accept month number and display month name.
	
	int month_Number;
	
	printf("\n\n\t Enter Month Number 1 to 12 : ");
	scanf("%d",&month_Number);
	
	switch(month_Number)
	{
		case 1 : printf("\n\n\t January");
				break;
		case 2 : printf("\n\n\t February");
				break;
		case 3 : printf("\n\n\t March");
				break;
		case 4 : printf("\n\n\t April");
				break;
		case 5 : printf("\n\n\t May");
				break;
		case 6 : printf("\n\n\t June");
				break;
		case 7 : printf("\n\n\t July");
				break;
		case 8 : printf("\n\n\t August");
				break;
		case 9 : printf("\n\n\t September");
				break;
		case 10 : printf("\n\n\t October");
				break;
		case 11 : printf("\n\n\t November");
				break;
		case 12 : printf("\n\n\t December");
				break;
		default : printf("\n\n\t Invalid Input.... Try Again....");
				break;
		
	}
}
