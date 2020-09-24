/*
 ============================================================================
 Name        : Ejercicio2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int contar_ocurrencias_de_un_num_eImprimir_cantidad(int* array, int len, int numero );

int main(void) {
	int numeros[12]={3,7,4,5,2,3,7,1,7,3,2,7};
	contar_ocurrencias_de_un_num_eImprimir_cantidad(numeros, 12, 7);

	return EXIT_SUCCESS;
}
int contar_ocurrencias_de_un_num_eImprimir_cantidad(int* array, int len, int numero )
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
		if(contador>0)
		{
			printf("\nOcurencias totales del >>%d<< son: %d",numero, contador);
		}
		else{
			printf("\nno hay ocurrencias");
		}
	}
	return r;
}

