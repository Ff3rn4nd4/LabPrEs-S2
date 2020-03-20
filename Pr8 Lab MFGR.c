//Ciclos arreglos 1 dimensión
   /*dado un numero n<100 && n>0, mostrar los n numeros y si son primos o no (almacenados en el arreglo)*/
   //for while,for
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
	
	int num1,p,numeros[100];
	
	//proceso para el número
	printf("Ingrese un n%cmero:",163);
	scanf("%d",&num1);
	
	while(num1<1 || num1>100)
	{
		printf("\tIngrese un n%cmero v%clido",163,160);
		scanf("%d",&num1);
	}
	
	//proceso para la impresión
	for(p=1;p<=num1;p++)
	{
		numeros[p]=p;
	}
	
		for(p=1;p<num1;p++)
		{
			if(numeros[p]==2 || numeros[p]==3 || numeros[p]==5 || numeros[p]==7)
			{
				printf("%d Es primo\n",numeros[p]);
			}else
				{
					if(numeros[p]%2!=0 && numeros[p]%3!=0 && numeros[p]%5!=0 && numeros[p]%7!=0)
					{
						printf("%d Es primo\n",numeros[p]);
					}else
					{
						printf("%d No es primo\n",numeros[p]);
					}
				}
		}
	system("pause");
	return 0;
}
