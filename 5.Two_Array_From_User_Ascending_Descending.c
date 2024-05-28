#include<stdio.h>
void Sort(int arr[], int n, int order);
main()
{
	/* 5. WAP to take two Array input from user and sort them in ascending or
	descending order as per user’s choice. */
	
	int n, i, choice, arr1[n], arr2[n];
    
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);
    
    printf("Enter elements of first array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter elements of second array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    
    printf("Enter sorting order:\n1. Ascending\n2. Descending\n");
    scanf("%d", &choice);
    
    printf("Sorted first array: ");
    Sort(arr1, n, choice);
    Sort(arr1, n);
    
    printf("Sorted second array: ");
    Sort(arr2, n, choice);
    Sort(arr2, n);
}

void Sort(int arr[], int n, int order) 
{
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if ((order == 1 && arr[j] > arr[j+1]) || (order == 2 && arr[j] < arr[j+1])) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

