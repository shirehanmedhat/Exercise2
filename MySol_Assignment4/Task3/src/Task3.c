/*
 ============================================================================
 Name        : Task3.c
 Author      : Shirehan Medhat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void ReveseInput (int *PtrToArray , int size);
#define SIZE 10
int main(void) {
	int Array [SIZE]={0};
	ReveseInput (Array , SIZE);






}
void ReveseInput (int *PtrToArray , int size)
{
	printf("Enter 10 integers\n");
	fflush(stdout);
	for (int i =0; i< size ; i++)
	{
		scanf("%d",&PtrToArray[i]);
	}

	printf("After Reverse:\n");

	for (int i =0 ;i<size ; i++)
	{
		printf("Element Number %d is %d\n",size-i,PtrToArray[size-1-i]);
	}




}
