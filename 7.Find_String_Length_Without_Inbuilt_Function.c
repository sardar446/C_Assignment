#include<stdio.h>
int stringLength(char *str);
main()
{
	/* 7. WAP Find out length of string without using inbuilt function */
	
	char str[50];
    
    printf("Enter a string: ");
    scanf("%[^\n]",&str);

    int length = stringLength(str);
    printf("Length of the string: %d\n", length);
}
int stringLength(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
