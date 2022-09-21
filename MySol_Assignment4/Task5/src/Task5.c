/*
 ============================================================================
 Name        : Task5.c
 Author      : Shirehan Medhat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void CopyElements (int *PtrToArray1 , int *PtrToArray2 , int SameSize);
int main(void) {
	int Array1[5]={1,2,9,4,5};
	int Array2[5]={0};
	CopyElements (Array1 , Array2 , 5);
	for (int i =0; i<5 ; i++)
	{
		printf("the element %d is %d\n",i+1 ,Array2[i]);
		fflush(stdout);
	}




}
void CopyElements (int *PtrToArray1 , int *PtrToArray2 , int SameSize)
{
	for (int i =0; i <SameSize ; i++)
	{
		PtrToArray2[i]= PtrToArray1[i];
	}
}
