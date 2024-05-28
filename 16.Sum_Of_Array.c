#include<stdio.h>
main()
{
	/* 16.Accept 5 numbers from user and perform sum of array */
	
	int numbers[5], i, sum = 0;

    // Input 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calculate the sum of the array
    for (i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    // Display the sum
    printf("\nSum of the numbers in the array: %d\n", sum);
}

