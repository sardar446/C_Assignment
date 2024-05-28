#include<stdio.h>
main()
{
	/* 15.Write a C program to determine eligibility for admission to a professional
	course based on the following criteria
	Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
	in Chem>=50 and Total in all three subject >=190 or Total in Maths and
	Physics >=140 --------------------------------------Input the marks obtained in
	Physics :65 Input the marks obtained in Chemistry :51 Input the marks
	obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
	188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/

	int Maths, Physics, Chemistry, MPC, MP;

	printf("\n\n\t Enter Maths Number : ");
	scanf("%d",&Maths);

	printf("\n\n\t Enter Physics Number : ");
	scanf("%d",&Physics);

	printf("\n\n\t Enter Chemistry Number : ");
	scanf("%d",&Chemistry);
	
	MPC = Maths+Physics+Chemistry;
	MP = Maths+Physics;
	
	printf("\n\n\t Maths+Physics+Chemistry : %d",MPC);
	printf("\n\n\t Maths+Physics : %d",MP);
	
	if(MPC>=190 || MP>=140)
	{
		printf("\n\n\t You are Eligible ");
	}
	else
	{
		printf("\n\n\t You are Not Eligible ");
	}
 
}
