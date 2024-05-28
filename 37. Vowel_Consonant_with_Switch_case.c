#include<stdio.h>
main()
{
	/*37. WAP to show
	ii. Vowel or Consonant using switch case */
	
	char c;
	
	printf("\n\n\t Enter the Charactor (A-Z/a-z) : ");
	scanf("%c",&c);
	
	switch(c)
	{
	  case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
	  case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': printf("\n\n\t Vowel");
        	break;
	  default :printf("\n\n\t Consonant");
		break;
	}
}
