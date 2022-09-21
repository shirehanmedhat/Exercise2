/*
 ============================================================================
 Name        : Task1.c
 Author      : Shirehan Medhat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void CountSum (int *PtrToArray, int size , int *Sum);
int main(void) {
	int Sum=0;
	int Array[5] ={1,2,3,4,5};


	CountSum (Array, 5 , &Sum);
	printf("The Summation is %d\n",Sum);

}

void CountSum (int *PtrToArray, int size , int *Sum)
{
	for (int i =0 ; i< size ; i++)
	{
		(*Sum)+=PtrToArray[i];
	}
}
