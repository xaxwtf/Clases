/*
 ============================================================================
 Name        : Ejercicio4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int contar_ocurrencias_char(char* cadena, int len, char caracter,int* resultado);
int main(void) {
	char nombre[8]={'p','e','p','e','1','2','3','\0'};
	int ocurrencias;
	if(!contar_ocurrencias_char(nombre, 8, 'e', &ocurrencias))
	{
		printf("la letra e aparece %d veces",ocurrencias);
	}
	return EXIT_SUCCESS;
}
int contar_ocurrencias_char(char* cadena, int len, char caracter,int* resultado)
{
	int r=-1;
	int contador=0;
	if(cadena!=NULL && len>0 && resultado!=NULL)
	{
		for(int i=0;i<len;i++)
		{
			if(cadena[i]==caracter)
			{
				contador++;

			}
		}
		r=0;
		*resultado=contador;
	}
	return r;
}

