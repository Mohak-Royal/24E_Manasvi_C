#include<stdio.h>
#include<conio.h>

void main(){
	int num1 , num2;
	clrscr();

	printf("Enter the value of num1: ");
	scanf("%d",&num1);

	printf("Enter the value of num2: ");
	scanf("%d" , &num2);


	// Addition operator: +

	// way1

	//ans = num1 + num2;

	//printf("The sum of %d and %d is: %d",num1,num2,ans);


	// way2

	printf("The sum of %d and %d is: %d",num1,num2,num1+num2);


	// Subtraction : -


	printf("\nThe Subtraction of %d and %d is: %d" , num1 , num2 , num1-num2);


	// Multiplication: *

	printf("\nThe multiplication of %d and %d is: %d" , num1 , num2 , num1*num2);

	// Division: /

	printf("\nThe Division of %d and %d is: %d" , num1 , num2 , num1/num2);

	// Modulus: %

	printf("\nThe modulus of %d and %d is: %d" , num1 , num2 , num1%num2);

	getch();

}



/*

Operators: it is simply a symbol that is used to perform operations.

1. Arithmetic Operators
2. Relational Operators
3. Logical Operators
4. Assignment Operators
5. Shift Operators
6. Bitwise Operators
7. Ternary or conditional Operator



Arithmetic Operators: these are used to perform mathematical operations.
-these operators are used between two operands.


	- Addition Operator:  +
	- Subtraction Operator: -
	- Multiplication Operator: *
	- Modulus Operator: %
	- Division Operator: /













*/

