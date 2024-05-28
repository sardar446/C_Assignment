#include<stdio.h>

int isPalindrome(int num) {
    int reversedNum = 0, originalNum = num;

    // Reverse the number
    while (num > 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }

    // Check if the reversed number is equal to the original number
    if (originalNum == reversedNum)
        return 1; // It's a palindrome
    else
        return 0; // It's not a palindrome
}

main()
{
	/* 10.WAP to perform Palindrome number using for loop and function*/
	int num;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("%d is a palindrome number.\n", num);
    else
        printf("%d is not a palindrome number.\n", num);	
}

