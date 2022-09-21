/*
 ============================================================================
 Name        : Task9.c
 Author      : Shirehan Medhat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void CreateReversedEnd (char *PtrToOriginalString , char *PtrToNewString);

int main(void) {

				char String[10]="bat";
				char NewString[10] ;
				CreateReversedEnd (String , NewString);
				puts(NewString);

	return 0;
}
void CreateReversedEnd (char *PtrToOriginalString , char *PtrToNewString)
{
	int Size;
	for ( Size =0; PtrToOriginalString[Size]!='\0'; Size++ );
	PtrToNewString[0]=PtrToOriginalString[Size-1];
	PtrToNewString[1]=PtrToOriginalString[Size-2];
	PtrToNewString[2]='\0';
}
