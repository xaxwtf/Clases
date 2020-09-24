/*
 ============================================================================
 Name        : estructuras.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
void listar_alumnos(sAlumno* lista,int len);
typedef struct{
	char nombre[50];
	int legajo;
}sAlumno;

int main(void) {
	sAlumno alumnos[5];
	sAlumno aux;
	int opc=123;
	do{
		printf("\n-----ESTRUCTURAS----- "
				"\n 1-Alta alumnos"
				"\n 2-Listar alumnos"
				"\n 0-salir");
			scanf("%d",&opc);
			switch(opc){
				case 1:
					for(int i=0;i<5;i++)
						{
							myGets(aux.nombre, 50);
							getInt("indique  el legajo","error, el numero indicado esta fuera de rango" , aux.legajo, 3, 100, 3);
							alumnos[i]=aux;
						}
					break;
				case 2:
						listar_alumnos(alumnos, 5);
					break;
			}

	}while(opc!=0);

	return EXIT_SUCCESS;
}
void listar_alumnos(sAlumno* lista,int len)
{
	for(int i=0;i<len;i++)
	{
		printf("%20s %d",lista[i].nombre,lista[i].legajo);
	}
}
