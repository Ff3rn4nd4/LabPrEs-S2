//Practica 3 (13-02-20) if anidados/getchar

#include<stdio.h>

int main () {
	
	char c; 
	
	printf("Ingresa un caracter:");
	c= getchar();
	
	//castig, lo transforma a su forma entera, de caracter a entero, el c ahora es el entero(valor ASCII)
		int a= (int) c;
		
		if(48<= a && a <=57)
		{
			printf("Numero entero:");
		}else
		{
			if( 65 <= a && a <=90){
				printf("Upper Entero alfabetico");
		}else{
			if(97<= a && a <=122){
				printf("Lower entrero alfabetico");
				}else{
					printf("simbolo entero:");
				}
			}
			
		}
		
putchar(c);
printf("\n");
return(0);

}

