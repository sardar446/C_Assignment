#include<stdio.h>

main()
{
	// 2. WAP to accept 5 numbers from user and display all numbers
    int a[5], i;

    // Accepting 5 numbers from the user
    printf("\n\n\t .....Enter 5 numbers.....");
    for (i = 0; i < 5; i++) 
    {
        printf("\n\n\t Enter number %d: ", i+1);
        scanf("%d", &a[i]);
    }

    // Displaying the entered numbers
    printf("\n\n\t Entered numbers is:");
    for (i = 0; i < 5; i++) {
        printf("\n\n\t %d", a[i]);
    }
}
