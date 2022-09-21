/*
 ============================================================================
 Name        : Task2.c
 Author      : Shirehan Medhat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void CountString (char *PtrToString , int *number);
int main(void) {
	char String[10] = "Shirehan";
	int num=0;
	 CountString (String ,&num);
	 printf("The number is %d",num);




}
void CountString (char *PtrToString , int *number)
{

	for (*number=0 ; PtrToString[(*number)]!=0 ; (*number)++ );
}
