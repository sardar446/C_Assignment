#include <stdio.h>
void reverse(char *str, int start, int end);
main() {
    /* 3. WAP to find reverse of string using recursion */
    	char str[30];
    printf("Enter a string: ");
    gets(str); // Using gets() to get the input string
    
    int length = strlen(str);
    reverse(str, 0, length - 1);
    printf("\nReversed string: %s", str);

}

void reverse(char *str, int start, int end) 
{

    if (start >= end) // Base case: when start index is greater than or equal to end index
        return;
    // Swap characters at start and end indices
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    
    // Recursively call reverseString with updated start and end indices
    reverse(str, start + 1, end - 1);
}
