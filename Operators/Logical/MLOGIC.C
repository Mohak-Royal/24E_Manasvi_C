#include<stdio.h>
#include<conio.h>


void main(){
	int a , b , c;
	clrscr();


	// AND : &&

	a = 5;
	b = 10;
	c = 15;


	//printf("%d" , (a > b) && (b > c));

	// OR  : ||(pipes)

	//printf("%d" , !((a > b) || (b > c)));


	//printf("%d" , !(a > b));

	getch();
}

/*
1. Arithmetic Operators:  + , - ,  * , % , / :   2 operand , 1 operators :
  ans : int , float  :  int , float , expression

2. Relational Operators:  == , !=  , < , > , <=  , >= : 2 operands , 1 op
   ans : 1 , 0   , variable , value: int , float , char


   a == b       b < c



3. Logical Operators:  These operators are used to perform logical operations.

	-it only performs operations on 0 or 1 value , values or expressions
	 that return 0 or 1


Types of Logical Operators :



1. Logical AND  :  &&

1	1	:  1
0	1	:  0
0	1	:  0
0	0	:  0


2. Logical OR	:  || (2 pipes)

1	1	:  1
0	1	:  1
1	0	:  1
0	0	:  0


3. Logical NOT  :   !


1	:	0
0	:	1








*/