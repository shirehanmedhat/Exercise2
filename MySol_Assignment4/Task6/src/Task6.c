/*
 ============================================================================
 Name        : Task6.c
 Author      : Shirehan Medhat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int arr[10]={1,2,3,4,10,6,7,8,9,5};
	int *PtrToArrays[10];
	for (int i =0 ;i <10 ;i++)
	{
		PtrToArrays[i]=&arr[i];
	}
	int max = *PtrToArrays[0];

	for(int j =0 ;j<10 ; j++)
	{
		if ((*PtrToArrays[j])>max)
		{
			max = (*PtrToArrays[j]);
		}
	}
	printf("The max element is %d\n",max);
	for (int j =0 ;j<10;j++)
	{
		printf("the %d element is %d\n",j,*PtrToArrays[j]);
	}

	return 0;
}

