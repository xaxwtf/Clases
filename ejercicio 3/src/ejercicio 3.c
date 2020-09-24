/*
 ============================================================================
 Name        : ejercicio 3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int contar_ocurrencias_de_un_num(int* array, int len, int numero, int* deposito);

int main(void) {
	int numeros[12]={3,7,4,5,2,3,7,1,7,3,2,7};
	int ocurrencias;
	if(!contar_ocurrencias_de_un_num(numeros, 12, 7, &ocurrencias))
	{
		printf("cantidad de Ocurencias = %d",ocurrencias);
	}

	return EXIT_SUCCESS;
}
int contar_ocurrencias_de_un_num(int* array, int len, int numero,int* deposito)
{
	int r=-1;
	int contador=0;
	if(array!=NULL && len>0)
	{
		for(int i=0;i<len;i++)
		{
			if(array[i]==numero)
			{
				contador++;
				r=0;
			}
		}
		*deposito=contador;
	}
	return r;
}

