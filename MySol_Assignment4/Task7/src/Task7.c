/*
 ============================================================================
 Name        : Task7.c
 Author      : Shirehan Medhat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void SwapeFunction(int *Num1 , int *Num2);
int main(void) {

	void (*PtrToSwapeFunctions) (int* , int*);
	PtrToSwapeFunctions = &SwapeFunction;
	int x=9;
	int y=5;
	printf("before swape x= %d , y= %d\n",x,y);
	fflush(stdout);
	(*PtrToSwapeFunctions)(&x , &y);
	printf("After swape x= %d , y= %d\n",x,y);
	return EXIT_SUCCESS;
}
void SwapeFunction(int *Num1 , int *Num2)
{
	*Num1= *Num1 ^ *Num2;
	*Num2= *Num1 ^ *Num2;
	*Num1= *Num1 ^ *Num2;
}
