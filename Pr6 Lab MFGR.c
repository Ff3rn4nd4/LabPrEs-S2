//(do while) misma practica de while: pedir numeros mayores o iguales a 0, cuando de un numero negativo dejará de pedir numeros, y cuando acabe muestra el promedio de los numeros ingresados (5/03/20)

#include <stdlib.h>
#include <stdio.h>

int main (){
	
	int num,n;
	float prom,sumt;
	sumt=0;
	n=-1;
	num=0;
	
	do{
		printf("\nIngrese un numero:");
		
		sumt=num+sumt;	
		n++;
		scanf("%d",&num);
		
     }while(num>0);
    
    if(n==0){
    n=1;
	}
	
	prom=sumt/n;
	printf("El promedio de los numeros es: %.2f", prom);
						
	system("pause");
	return 0;
}
