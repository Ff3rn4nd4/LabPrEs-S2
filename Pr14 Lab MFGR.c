//Practica 15  - Files I/O
// usar como base la pr11 y almacenar la info en un archivo en formato json

#include<stdlib.h>
#include<stdio.h>

struct fecha
{
	unsigned int dia,mes,anio;
}f;

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
}a;

int main()
{
	//declaración de archivo
	FILE *archivo;
	char *info = "Registros.dat",op='s';
	archivo = fopen(info,"w");

	 
	printf("Ya que la prueba sera con 10 alum max, no se aceptan n%cmeros negativos o mayores a 10\n",163);

	do 
	{
		//abre el archivo y agrega al final
		archivo= fopen(info,"a");
		if(archivo == NULL)
		{
			printf("ERROR, no se puede abrrir el archivo\n");
		}else
			{ //en caso de que si pueda abrirse recolecta los datos	
					//almacenar los datos
					printf("\n Ingrese la informaci%cn del estudiante:\n",162);
								
					printf("\nNombre(s):");
					fflush(stdin);
					gets(a.nombre);	
												
					printf("Primer apellido:");
					fflush(stdin);
					gets(a.primerap);
					
					printf("Segundo apellido (opcional):");
					fflush(stdin);
					gets(a.segundap);
		
					printf("\nMatricula:");
					fflush(stdin);
					scanf("%s",&a.matricula);
					
					printf("Genero (M o F):");
					fflush(stdin);
					gets(a.genero);
					
					//+datos extra
					printf("\nIngrese su fecha de nacimiento (dia/mes/a%co)\n",164);
					printf("Dia:");
					fflush(stdin);
					scanf("%s",&f.dia);
					printf("Mes:");
					fflush(stdin);
					scanf("%s",&f.mes);
					printf("Anio:");
					fflush(stdin);
					scanf("%s",&f.anio);
																				
					printf("\nEscuela:");
					fflush(stdin);
					scanf("%s",&a.escuela);
																		
					printf("Carrera:");
					fflush(stdin);
					scanf("%s",&a.carrera);
																			
					printf("Semestre (ingrese solo el numero del semestre):");
					fflush(stdin);
					scanf("%s",&a.semestre);
					
					system("cls");
					//imprimir
					fprintf(archivo, "{\"Nombre(s)\":\"%s\"",a.nombre);
					fprintf(archivo, "\n\"Primer Apellido\":\"%s\"",a.primerap);
					fprintf(archivo, "\n\"Segundo Apellido\":\"%s\"",a.segundap);
					fprintf(archivo, "\n\"Matricula\":\"%s\"",a.matricula);
					fprintf(archivo, "\n\"Genero\":\"%s\"",a.genero);
					fprintf(archivo, "\n\"Dia\":\"%s\"",&f.dia);
					fprintf(archivo, "\n\"Mes\":\"%s\"",&f.mes);
					fprintf(archivo, "\n\"Año\": \"%s\"",&f.anio);
					fprintf(archivo, "\n\"Escuela\":\"%s\"",a.escuela);
					fprintf(archivo, "\n\"Carrera\":\"%s\"",a.carrera);
					fprintf(archivo, "\n\"Carrera\":\"%s}\"",&a.semestre);
				
			}
	//al finalizar de obtener datos se cierra el archivo
	fclose(archivo);
	
	printf("En caso que no quiera registrar ningun otro estudiante,todo lo que se escribio se guardara en el archivo binario \n");
		do
		{	
			printf("\nDesea ingresar un nuevo alumno[s/n]?\n");
			
			fflush(stdin);
			op=getche();
			//para convertir el caracter en minuscula (solo si es necesario
			op=tolower(op);	
			
				if(op!='s'&& op!= 'n')
				{
					printf("\n\tDato erroneo\n Ingrese s o n\n");
				}
				
		}while (op!= 's' && op!='n');
	
	}while(op!='n');	
	
	puts("\n\n\n\n\n\n\n'");
	system("pause");
	return 0;
}


