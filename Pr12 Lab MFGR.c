// Practica 12 - Functions
//Pedir los mismos valores que la practica 10 pero esta vez con funciones

#include<stdlib.h>
#include<stdio.h>

struct fecha
{
	unsigned int dia,mes,anio;
};

struct alumno
{
	char matricula[9];
	char nombre[40];
	char primerap[40];
	char segundap[40];
	char genero[10];
	char escuela[10];
	char carrera[10];
	int semestre;
	struct fecha fechaNacimiento;		
};

int info_estudiante(int u,struct alumno estudiante[' ']);


int	main()
{
	int u=0,n,b,cant;
	struct alumno estudiante[10];
	
	printf("Ya que la prueba sera con 10 alum max, no se aceptan n%cmeros negativos o mayores a 10\n",163);
	
	info_estudiante(u,estudiante);
	
	puts("\n\n\n\n\n\n\n");
	system("pause");
	return 0;
}

int info_estudiante(int u,struct alumno estudiante[' '])
{
	int r,n,b,cant;
		
	//validación para los alumnos
	do 
	{
		printf("Ingrese la cantidad de alumnos que se quiera registrar: ");
		scanf("%d",&cant);
		puts("\n");
			
		if(cant<1 || cant>10)
			puts("Ingrese una cantidad valida\n");	
	} while(cant<1 || cant>10);
	
	//ciclo para la información
	for(u=0;u<cant;u++)
	{	
		printf("\n Ingrese la informaci%cn del estudiante:\n",162);
						
		printf("\nNombre(s): ");
		fflush(stdin);
		gets(estudiante[u].nombre);	
									
		printf("Primer apellido: ");
		fflush(stdin);
		gets(estudiante[u].primerap);
			
		printf("Segundo apellido (opcional): ");
		fflush(stdin);
		gets(estudiante[u].segundap);
		
		//identificar si este alumno ya ha sido registrado
				
		printf("Matricula:");
		fflush(stdin);
		gets(estudiante[u].matricula);
			
		for(r=0;r<u;r++)
		{
			if(strcmp(estudiante[u].matricula,estudiante[r].matricula)==0)
			{
				printf("Este alumno ya ha sido registrado,ingrese una matricula difernte\n");
				
			}else printf("Matricula:");
					fflush(stdin); 
					gets(estudiante[u].matricula);	
		}
			
		printf("\nGenero (M o F): ");
		fflush(stdin);
		gets(estudiante[u].genero);
			
		//+datos extra
		printf("Ingrese su fecha de nacimiento (dia/mes/a%co)\n",164);
		fflush(stdin);
		printf("Dia:");
		scanf("%s",&estudiante[u].fechaNacimiento.dia);
		printf("Mes:");
		scanf("%s",&estudiante[u].fechaNacimiento.mes);
		printf("Anio:");
		scanf("%s",&estudiante[u].fechaNacimiento.anio);
																		
		printf("\nEscuela: ");
		fflush(stdin);
		scanf("%s",&estudiante[u].escuela);
																
		printf("Carrera: ");
		fflush(stdin);
		scanf("%s",&estudiante[u].carrera);
																	
		printf("Semestre (ingrese solo el numero del semestre): ");
		fflush(stdin);
		scanf("%s",&estudiante[u].semestre);
		
		system("cls");
	}
	
	for(u=0;u<cant;u++)
	{
		printf("\nNombre(s): %s\n",&estudiante[u].nombre);
				
		printf("Primer apellido: %s\n",&estudiante[u].primerap);
			
		printf("Segundo apellido (opcional): %s\n",&estudiante[u].segundap);
				
		printf("Matricula: %s",&estudiante[u].matricula);

		printf("\nGenero (M o F):%s \n",&estudiante[u].genero);
	
		printf("Fecha de nacimiento (dia/mes/a%co)\n",164);
		printf("%s/%s/%s",&estudiante[u].fechaNacimiento.dia,&estudiante[u].fechaNacimiento.mes,&estudiante[u].fechaNacimiento.anio);
																
		printf("\nEscuela: %s",&estudiante[u].escuela);
																	
		printf("\nCarrera:%s",&estudiante[u].carrera);
																		
		printf("\nSemestre: %s",&estudiante[u].semestre);
		
		puts("\n");
	}
	
	return u;
}


