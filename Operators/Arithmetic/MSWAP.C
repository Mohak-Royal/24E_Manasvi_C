#include<stdio.h>
#include<conio.h>


void main(){
	int a , b;
	clrscr();


	printf("Enter the value of a: ");
	scanf("%d" , &a);

	printf("Enter the value of b: ");
	scanf("%d" , &b);

	printf("Before Swap: ");
	printf("\n a = %d and b = %d" , a , b);

	//temp = a;
	//a = b;
	//b = temp;

	/*
	a = 10
	b = 20

	a = a+b;  10+20
	a = 30
	b = a-b;

	*/


	a = a+b;
	b = a-b;
	a = a-b;

	printf("\nAfter Swap: ");
	printf("\n a = %d and b = %d" , a , b);
	getch();
}