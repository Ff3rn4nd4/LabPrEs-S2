// (ciclo while) pedir numeros mayores o iguales a 0, cuando de un numero negativo dejará de pedir numeros, y cuando acabe muestra el promedio de los numeros ingresados (27/02/20)

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num,n;
	float prom,sumt;
	sumt=0;
	n=-1;
	num=0;
			
	printf("Para terminar de sumar los numeros ingresar un numero negativo");
	
			while(num>=0)
			{
				sumt=num+sumt;	
				n++;
				printf("\nIngrese un numero:");
						scanf("%d",&num);						
		   }
		   
			prom=sumt/n;
			printf("El promedio de los numeros es: %.2f", prom);
					
	system("pause");
	return 0;
}
