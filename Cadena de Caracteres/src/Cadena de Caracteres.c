/*
 ============================================================================
 Name        : Cadena.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <string.h>
#define len 10
int soloLetras(char* vec);
int get_nombre(char* resultado, char* mensaje, char* mensajeError, int intentos, int limite);

int main(void) {
	char nombre[len];
	if(get_nombre(nombre, "indique un nombre\n", "error", 3, 10)==0)
	{
		printf("%s",nombre);
	}
	return EXIT_SUCCESS;
}
int soloLetras(char* vec)
{
    int r=0;
    int i=0;
    while(vec[i]!='\0')
    {
        if((vec[i]<'a'||vec[i]>'z')&&(vec[i]<'A'||vec[i]>'Z'))
        {
            r=-1;
        }
        i++;
    }
    return r;
}
int get_nombre(char* resultado, char* mensaje, char* mensajeError, int intentos, int limite)
{
	char buffer[9999];
	int r=-1;
	if(resultado!=NULL && mensaje!=NULL && mensajeError!=NULL && intentos>0 && limite> 0)
	{
		for(int i=0;i<intentos;i++)
		{
			printf("%s", mensaje);
			scanf("%s",buffer);
			__fpurge(stdin);
			if(soloLetras(buffer)==0)
			{
				r=0;
				strncpy(resultado,buffer,limite);

				break;
			}
			else{
				printf("%s",mensajeError);
			}
		}
	}
	return r;

}
