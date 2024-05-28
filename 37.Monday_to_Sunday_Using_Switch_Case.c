#include<stdio.h>
main()
{
	/*37. WAP to show
	i. Monday to Sunday using switch case */
	

	int day; // 1 to 7
	
	printf("\n\n\t Enter a Number 1 to 7 : ");
	scanf("%d",&day);
	
	switch(day)
	{
		case 1 : printf("\n\n\t Monday");
			break;
		case 2 : printf("\n\n\t Tuesday");
			break;
		case 3 : printf("\n\n\t Wednesday");
			break;
		case 4 : printf("\n\n\t Thursday");
			break;
		case 5 : printf("\n\n\t Friday");
			break;
		case 6 : printf("\n\n\t Saturday");
			break;
		case 7 : printf("\n\n\t Sanday");
			break;
		default : printf("\n\n\t Invalid Input..... Try again...");
			break;
	}
}
