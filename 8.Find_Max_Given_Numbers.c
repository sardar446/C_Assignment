#include<stdio.h>
main() 
{
	/*8.Write a program to find out the max from given number (E.g., No: -1562
	//Max number is 6)*/
    int num, max = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    num = (num < 0) ? num : num;

    // Definition
    while (num > 0) {
        digit = num % 10;
        if (digit > max) {
            max = digit;
                }
                num /= 10;
    }

    printf("\n\n\t Max digit is: %d",max);
}

