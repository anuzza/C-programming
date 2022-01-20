#include <stdio.h>
#include <stdlib.h>



int main ()
{
	//Printing

	printf("Hello\n");
	printf("World");
	printf ("!\n");
	
	//Variables
	
	/*
	Names are case-sensitive and may begin with:
	letters,_
	after, may include
	
		letters, numbers, _
		
		convenion says 
		start with a lowercase word, then additional words are capitalized eg. myFirstVariable
		
	
	*/
	
	char testGrade = 'A';// single 8-bit character
	char name [] = "Mike";// array of characters (string)
	
	// you can name them unsigned by adding "unsigned" prefix
	short age0 = 10;//atleast 160bits signed integer
	int age1 = 20;// atleast 16-bots signed integer
	long age2 = 30;// atleast 32 bits signed integer
	long long age3 = 40;// atleast 64-bits signed integer
	
	float gpa0 = 2.5; // single precicion floatin point
	double gpa1 = 3.5; //double-precision floating point
	long double gpa2 = 3.5; //extended-precision floatin point
	
	int isTall; // 0 if false, non-zero if true
	isTall =1;
	
	testGrade = 'F';
	
	const int IS_TALL; 
	
	printf("%s, your grade is %c \n", name, testGrade);
	
	/*
	
	%c character
	%d integer number (base 10)
	%e exponential floating-point number
	%f floating-point number%i integer (base 10)
	%i integer (base 10)
	%o octal number (base 8)
	%s a string of characters
	%u unsigned decimal
	%x number in hexadecimal(base 16)
	%% print a percent sign
	\% print a percent sign
	
	
	*/
	
	// casting 
	printf ("%d \n", (int)3.14);
	printf ("%f \n",(double)3/2);
	
	
	
	//pointers
	
	int num =10;
	printf("%p \n",&num);
	
	int *pNum = &num;
	printf("%p \n", pNum);
	printf("%d \n", *pNum);
	
	//numbers
	
	printf("%d \n", 2 *3 ); //basic arithmetic: +, -, /, *
	printf("%d \n", 10 %3); //Modulud Op. : returns remainder of 10/3
	printf("%d \n", (1+2)*3); //order of operationms
	printf("%d \n", 10/3); //int's and doubles
	
	int num = 10;
	num += 100; // +=, -=, *=, /=
	printf ("%d \n", num);
	
	num++;
	printf("%d \n", num);
	
	
	//USER INPUT
	
	char name[10];
	printf ("Enter your name : ");
	fgets(name, 10, stdin);
	printf("Hello %s \n", name);
	
	int age;
	printf("Enter your age: ");
	
	
	
	
	
	
	

	



	return 0;
}