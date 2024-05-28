#include<stdio.h>
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the numbers if they are in the wrong order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

main()
{
	/* 15.Store 5 numbers in array and sort it in ascending order */
	
	int numbers[5], i;

    // Input 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Sort the numbers in ascending order using bubble sort
    bubbleSort(numbers, 5);

    // Display the sorted numbers
    printf("\nSorted numbers in ascending order:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }
}

