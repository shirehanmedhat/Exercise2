/*
 ============================================================================
 Name        : Task4.c
 Author      : Shirehan Medhat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int SmallestMember (int *PtrToArray , int ArraySize);
int main(void) {
	int Array[7]={2,65,-9,8,7,3,-111};

	int Smallest = SmallestMember(Array , 7);
	printf("The Smallest Number is %d",Smallest);


	return 0;
}
int SmallestMember (int *PtrToArray , int ArraySize)
{
	if (PtrToArray != NULL)
	{int min = PtrToArray[0];

	for (int i=1 ;i<ArraySize ; i++)
	{
		if (PtrToArray[i]<min)
		{
			min = PtrToArray[i];
		}
	}
	return min;
	}

}
