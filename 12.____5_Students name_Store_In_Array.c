#include<stdio.h>
#include<string.h>
main()
{
	/*12.WAP to accept 5 students name and store it in array*/
	
	char names[5][50]; 
    int i;

    
    printf("Enter names of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%s", names[i]); 
    }

    printf("\nNames of students entered:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: %s\n", i + 1, names[i]);
    }
}
