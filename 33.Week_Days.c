#include <stdio.h>

main() 
{
	//33.WAP to input the week number and print week day.
    int weekNumber;
    
    // Input week number
    printf("Enter the week number (1-7): ");
    scanf("%d", &weekNumber);
    
    switch (weekNumber) {
        case 1:
            printf("\n\n\t MONDAY");
            break;
        case 2:
            printf("\n\n\t TUESDAY");
            break;
        case 3:
            printf("\n\n\t WEDNESDAY");
            break;
        case 4:
            printf("\n\n\t THURSDAY");
            break;
        case 5:
            printf("\n\n\t FRIDAY");
            break;
        case 6:
            printf("\n\n\t SATURDAY");
            break;
        case 7:
            printf("\n\n\t SUNDAY");
            break;
        default:
            printf("\n\n\t Invalid week number!");
    }
}

