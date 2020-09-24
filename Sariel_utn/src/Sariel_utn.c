/*
 ============================================================================
 Name        : Sariel_utn.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "utn.h"

int main(void) {

	char palabra[100];
	myGets(palabra, 100);
	printf("%s",palabra);

	return EXIT_SUCCESS;
}
