// Calculadora básica (20/02/20)

#include<stdio.h>
#include<stdlib.h>

int main (){
	//declaracion de variables
	int num1,num2;
	char operacion;
	//introducción de datos
	printf("\nIntroduzca el primer numero:");
	scanf("%d",&num1);
	printf("\nIntroduzca el segundo numero:");
	scanf("%d",&num2);
	printf("\nSeleccione la operacion que se realizara (+,-,/,*):");
	// hay que ponerle espacio para que pueda hacer la acción
	scanf(" %c",&operacion);
	//ciclo switch
	switch (operacion){
		case '+' :
			printf("%d + %d = %d\n",num1,num2,num1+num2);
			break;
			
		case '-' :
			printf("%d - %d = %d\n", num1,num2,num1-num2);
			break;
		
		case '/' :
			printf("%d / %d = %d\n", num1,num2,num1/num2);
			break;
			
		case '*' :
			printf("%d * %d = %d\n", num1,num2,num1*num2);
			break;
			
	 		default:
	 			printf("\nError, introduzca otra operacion");
	}
	
	
	system("PAUSE");
	return 0;
}
