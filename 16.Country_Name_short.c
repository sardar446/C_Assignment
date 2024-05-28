#include<stdio.h>
main()
{
	/* 16.Convert country’s name in abbreviate form */
	char n1[10], n2[10], n3[10];
	
	printf("\n\n\t School First Name : ");
	scanf("%s",&n1);
	
	printf("\n\n\t School Middle Name : ");
	scanf("%s",&n2);
	
	printf("\n\n\t School Last Name : ");
	scanf("%s",&n3);
	
	printf("\n\n\t Name Of School in Abbreviated : %c %c %c",n1[0],n2[0],n3[0]);
}
