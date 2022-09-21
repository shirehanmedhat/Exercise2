/*
 ============================================================================
 Name        : Task10.c
 Author      : Shirehan Medhat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void SwapePointers(int **PtrToPtr1 , int **PtrToPtr2);

int main(void) {
	int Var1 = 1;
	int Var2 = 2;
	int *Ptr1 = &Var1;
	int *Ptr2 = &Var2;
	printf("the Ptr1 holds an adress of %p with value %d\n",Ptr1,*Ptr1);
	printf("the Ptr2 holds an adress of %p with value %d\n",Ptr2,*Ptr2);
	printf("SWAPE\n");
	SwapePointers(&Ptr1 , &Ptr2);
	printf("the Ptr1 holds an adress of %p with value %d\n",Ptr1,*Ptr1);
    printf("the Ptr2 holds an adress of %p with value %d\n",Ptr2,*Ptr2);

	return 0;
}
void SwapePointers(int **PtrToPtr1 , int **PtrToPtr2)
{
	int *TempPtr=*PtrToPtr1;
	*PtrToPtr1 = *PtrToPtr2;
	*PtrToPtr2= TempPtr;
}
