/*
 ============================================================================
 Name        : Task11.c
 Author      : Shirehan Medhat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void SwapeTwoBits (short int *PtrTohalfInt);
int main(void) {

	int x =0xFFFFAAAA;
    SwapeTwoBits ((short*)&x);
    printf("\n\nAfter Swape:....%x",x);

}

void SwapeTwoBits (short int *PtrTohalfInt)
{

	short int Temp = *(PtrTohalfInt+0);
	*(PtrTohalfInt+0) = *(PtrTohalfInt+1);
	*(PtrTohalfInt+1)=Temp;


}
