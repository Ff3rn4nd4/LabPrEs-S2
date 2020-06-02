//Practica 10 - Strings and array of strings
// preguntar: student id (nombre,fecha de nacimiento,escuela,semestre,carrera,genero e imprimirlo todo


#include <conio.h>
#include <stdlib.h>
//biblioteca para cadenas
#include <string.h>
#include <stdio.h>

int main()
{
	//delcaración de variables 
	char students[10][9][150];
	int u,r,g,cant;
	
	
	printf("Ya que la prueba sera con 10 alum max, no se aceptan n%cmeros negativos o mayores a 10\n",163);
	
	//validación para los alumnos
		do 
		{
			printf("Ingrese la cantidad de alumnos que se quiera registrar: ");
			scanf("%d",&cant);
			puts("\n");
			
			if(cant<1 || cant>10)
				puts("Ingrese una cantidad valida\n");	
		} while(cant<1 || cant>10);
		
		
		
	//arreglo para almacenar los datos 
		for(u=0;u<cant;u++)
		{
			printf("\n Ingrese la informaci%cn del estudiante:\n",162);
						
			printf("\nNombre(s):");
			fflush(stdin);
			gets(students[u][0]);	
										
			printf("Primer apellido:");
			fflush(stdin);
			gets(students[u][1]);
			
			printf("Segundo apellido (opcional):");
			fflush(stdin);
			gets(students[u][2]);
						
			//identificar si este alumno ya ha sido registrado
				
			printf("Matricula:");
			fflush(stdin);
			gets(students[u][3]);
			
			for(r=0;r<u;r++)
			{
				if(strcmp(students[u][3],students[r][3])==0)
				{
					printf("Este alumno ya ha sido registrado");
				}	
			}
			
			//+datos extra
			printf("\nGenero (M o F):");
			fflush(stdin);
			gets(students[u][4]);
			
			//+datos extra
			printf("Ingrese su fecha de nacimiento (dia/mes/a%co):",164);
			fflush(stdin);
			scanf("%s",&students[u][5]);
																		
			printf("\nEscuela:");
			fflush(stdin);
			scanf("%s",&students[u][6]);
																
			printf("Carrera:");
			fflush(stdin);
			scanf("%s",&students[u][7]);
																	
			printf("Semestre (ingrese solo el numero del semestre):");
			fflush(stdin);
			scanf("%s",&students[u][8]);
		}
		
		
		
		puts("\n");
		printf("La informaci%cn brindada fue:\n",162);
		//para imprimir 
	
	for(u=0;u<cant;u++)
	{
		for(g=0;g<9;g++)
		{	
			fflush(stdin);
			puts("\n");
			printf("%s",students[u][g]);
			
		}
			printf("\n");
	}
	
	puts("\n\n\n\n\n\n\n");
	system("pause");
	return 0;
}
