//Practica 11.1 - Fibonacci
/*prueba de esta función*/

#include<stdlib.h>
#include<stdio.h>

// se tarda tanto ya que constantemente se esta sustituyendo un numero por el anterior lo cual implica un "trabajo doble"

	int in1=0,in2=1,gen=0;
	
	int fibonacci()
	{
		in1=in2;
		in2=gen;
		gen=in1+in2;
		return gen;
	}
	
int main()
{
		int num,i;
	
		printf("Ingrese la cantidad de numeros de la serie fibonacci:");
		scanf("%d",&num);
		
			for(i=0;i<num;i++)
			{
				printf("%d\n",fibonacci());
					
			}
	return 0;          		
}


