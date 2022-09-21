/*
 ============================================================================
 Name        : task12.c
 Author      : Shirehan Medhat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int ReturnOddRep (int *PtrToArray , int ArraySize);
int main(void) {
	int Array[15]={1,2,3,1,2,3,1,1,1,1,3,3,3};
	int x =ReturnOddRep (Array,15);
	printf("the number is %d",x);


	return EXIT_SUCCESS;
}
int ReturnOddRep (int *PtrToArray , int ArraySize)
{
	int counter=0;
	int num;
	for (int i =0 ; i<ArraySize ; i++ )
	{
		for (int j=0;j<ArraySize ; j++)
		{
			if (PtrToArray[i]==PtrToArray[j])
			{
				counter++;
			}
		}
		if ((counter%2) !=0)
		{
			num = PtrToArray[i];
			break;
		}
		counter=0;
	}
	return num;
}
