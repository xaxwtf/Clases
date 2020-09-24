/*
 ============================================================================
 Name        : Ejercicio1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int imprimir_array(int* array, int len);

int main(void) {
	int numeros[12]={3,7,4,5,2,3,7,1,7,3,2,7};
	imprimir_array(numeros, 12);

	return EXIT_SUCCESS;
}
int imprimir_array(int* array, int len)
{
	int r=-1;
	if(array!=NULL && len>0)
	{
		for(int i=0;i<len;i++)
		{
			printf("\n%d", array[i]);
			r=0;
		}
	}
	return r;
}
