#include<stdio.h>
main()
{
	//9.C Program to Check Uppercase or Lowercase or Digit or Special Character.
	
	char ch;
	
	printf("\n\n\t Enter Input : ");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("\n\n\t This is Upper case Character");
	}
	else if(ch>='a' && ch<='z')
	{
		printf("\n\n\t This is Lower case Charactor");
	}
	 else if(ch>='0'&& ch<='9')
	 {
        printf("\n\n\t This is Digit ");
	 }
	 else 
	 {
	 	printf("\n\n\t This is Special Charactor");
	 }
}
