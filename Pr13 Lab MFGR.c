// Practica 13 - Pointers 
//Pedir los mismos valores que la practica 10 pero esta vez con funciones con parametros
// 1- Total de estudiantes
// 2- Total de estudiantes por género
// 3- Total de estudiantes por carrera


#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

struct fecha
{
	unsigned int dia,mes,anio;
};

struct alumno
{
	char matricula[8];
	char nombre[40];
	char primerap[40];
	char segundap[40];
	char escuela[10];
	int semestre;
	struct fecha fechaNacimiento;		
};


int info_estudiante(int u,struct alumno estudiante[' ']);
void impresion(int u,struct alumno estudiante[' ']);


int	main()
{
	int u=0,cant;
	int gen,contgenM=0,contgenF=0;
	int ca,contcaLA=0,contcaLCC=0,contcaLMAD=0,contcaLF=0,contcaLM=0,contcaLSTI=0;
	struct alumno estudiante[10];
	
	printf("Ya que la prueba sera con 10 alum max, no se aceptan n%cmeros negativos o mayores a 10 \n",163);
	
	//validación para los alumnos
	do 
	{
		printf("Ingrese la cantidad de alumnos que se quiera registrar:");
		fflush(stdin);
		scanf("%d",&cant);
			
		if(cant<1 || cant>10)
			puts("Ingrese una cantidad valida\n");	
	} while(cant<1 || cant>10);
	
	
	
	for(u=0;u<cant;u++)
	{
		info_estudiante(u,estudiante);
		
		do
		{
			printf("\nGenero\nF(Femenino)\nM(Msculino)\n");
				fflush(stdin);
				gen=getche();
				//para convertir el caracter a mayuscula (solo si es necesario)
				gen=toupper(gen);	
					if(gen!='F'&& gen!= 'M')
					{
						printf("\n\tDato erroneo\n Ingrese F o M\n");
					}
		}while (gen!= 'F' && gen!='M');
		
			switch(gen)
			{
				case 'F':contgenF++;
					break;
				case 'M':contgenM++;
					break;
			}
			
		do
		{
		
			printf("\nCarrera\n1)LA\n2)LCC\n3)LMAD\n4)LF\n5)LM\n6)LSTI\n");
			fflush(stdin);
			ca=getche();
				
				if(ca<'1' || ca>'6')
				printf("\nError. Opción incorrecta, ingrese nuevamente una opción valida");
		}while (ca<'1' || ca>'6');
			
			switch(ca)
			{
				case '1': contcaLA++;
					break;
				case '2': contcaLCC++;
					break;
				case '3': contcaLMAD++;
					break;
				case '4': contcaLF++;
					break;
				case '5': contcaLM++;
					break;
				case '6': contcaLSTI++;
					break;
				case'7':
						break;
			}
		system("cls");
	}

	for(u=0;u<cant;u++)
	{
		impresion(u,estudiante);
	}
	
	printf("Los estudiantes ingresados fueron:%d\n",cant);
	printf("Cantidad de alumnos con genero Masculino:%d\n",contgenM);
	printf("Cantidad de alumnos con genero femenino:%d\n",contgenF);
	printf("Cantidad de alumnos en la carrera de LA: %d\n",contcaLA);
	printf("Cantidad de alumnos en la carrera de LCC: %d\n",contcaLCC);
	printf("Cantidad de alumnos en la carrera de LMAD: %d\n",contcaLMAD);
	printf("Cantidad de alumnos en la carrera de LF: %d\n",contcaLF);
	printf("Cantidad de alumnos en la carrera de LM: %d\n",contcaLM);
	printf("Cantidad de alumnos en la carrera de LSTI: %d\n",contcaLSTI);
	
	puts("\n\n\n\n\n\n\n");
	system("pause");
	return 0;
}


int info_estudiante(int u,struct alumno estudiante[' '])
{	
	int r;

	
	//ciclo para la información

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
			
		//+datos extra
		printf("\nIngrese su fecha de nacimiento (dia/mes/a%co)\n",164);
		fflush(stdin);
		printf("Dia:");
		scanf("%s",&estudiante[u].fechaNacimiento.dia);
		printf("Mes:");
		scanf("%s",&estudiante[u].fechaNacimiento.mes);
		printf("Anio:");
		scanf("%s",&estudiante[u].fechaNacimiento.anio);
																		
		printf("Escuela: ");
		fflush(stdin);
		scanf("%s",&estudiante[u].escuela);
																	
		printf("Semestre (ingrese solo el numero del semestre): ");
		fflush(stdin);
		scanf("%s",&estudiante[u].semestre);
	
		
	return u;
}

	
void impresion(int u,struct alumno estudiante[' '])
{
	
		printf("\nNombre(s): %s\n",&estudiante[u].nombre);
				
		printf("Primer apellido: %s\n",&estudiante[u].primerap);
			
		printf("Segundo apellido (opcional): %s\n",&estudiante[u].segundap);
				
		printf("Matricula: %s\n",&estudiante[u].matricula);
	
		printf("Fecha de nacimiento (dia/mes/a%co)\n",164);
		printf("%s/%s/%s",&estudiante[u].fechaNacimiento.dia,&estudiante[u].fechaNacimiento.mes,&estudiante[u].fechaNacimiento.anio);
																
		printf("\nEscuela: %s",&estudiante[u].escuela);
				
		printf("\nSemestre: %s",&estudiante[u].semestre);
		
		puts("\n");
	
}	
