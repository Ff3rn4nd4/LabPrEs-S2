//Ciclos for (12/03/20)
/* 1- pedir un numero (b) para usarlo de base
   2- pedir el numero (n) de multiplos a generar 
   3- Imprimir los (n) multiplos de (b) en pantalla */
   
#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int b,n,mult,i;
	
	//ingresar el numero base
	puts("Ingrese el numero base:");
	scanf("%d",&b);
	
	//ingresar el numero de multiplos a generar
	puts("Ingrese el numero de multiplos:");
	scanf("%d",&n);
	
	puts("Los multiplos son:");
	for(i=1;i<=n;i++)
	{
		multiplo=i*b;
		printf("%d * %d = %d\n",i,b,i*b);
	}
	
	
	puts("\n\n\n\n\n\n");
	system("pause");
	return 0;
}


