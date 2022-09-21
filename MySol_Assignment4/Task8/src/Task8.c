/*
 ============================================================================
 Name        : Task8.c
 Author      : Shirehan Medhat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void SwapeArrays (int *PtrToArray1 , int *PtrToArray2 , int ArraySize);
int main(void) {
	int Arr1[5]={1,2,3,4,5};
	int Arr2[5]={6,7,8,9,10};
	SwapeArrays (Arr1 , Arr2 , 5);

	for (int i=0;i<5;i++)
	{
		printf("Array1[%d]=%d\n",i,Arr1[i]);
	}

	for (int i=0;i<5;i++)
		{
			printf("Array2[%d]=%d\n",i,Arr2[i]);
		}
	return 0;
}
void SwapeArrays (int *PtrToArray1 , int *PtrToArray2 , int ArraySize)
{
	for (int i =0 ;i<ArraySize ; i++)
	{
		int Temp = PtrToArray1[i];
		PtrToArray1[i]=PtrToArray2[i];
		PtrToArray2[i]=Temp;
	}
}
