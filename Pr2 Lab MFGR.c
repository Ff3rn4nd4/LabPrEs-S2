// Practica 2 (07-02-20)

#include <stdio.h>
#include <conio.h>

int main () {

		/* ENTEROS */
		
	//declaración de variables
	int a =5, b =7, f;
	
	//operaciónes (+,-,*,/,%, ++, --)
	
	f= a+b;
	printf("%d + %d = %d\n", a,b,a+b);
	
	// para el salto de linea se agrega despues del resultado
	
	f= a-b;
	printf("%d - %d = %d\n", a,b,a-b);
	
	f= a*b;
	printf("%d * %d = %d\n", a,b,a*b);
	
	f= a/b;
	printf("%d / %d = %d\n", a,b,a/b);
	
	//residuo
	f= a%b;
	printf("%d // %d = %d\n", a,b,a%b);
	
	f= a--;
	printf("%d = %d\n", a,a--);
	
	f= b++;
	printf("%d = %d\n",b,b++);

		/* FLOTANTES */
	float c= 4.023, d=5.1930, j;

	//operaciones (+,-,*,/,++, --, ><,==,>=, <=)
	
	j=c+d;
	printf("%.2f + %.2f = %.2f\n",c,d,c+d);
	
	j=c-d;
	printf("%.2f - %.2f = %.2f\n", c,d,c-d);
	
	j=c*d;
	printf("%.2f * %.2f = %.2f\n", c,d,c*d);
	
	j=c/d;
	printf("%.2f / %.2f = %.2f\n", c,d,c/d);
	
	j= c++;
	printf("%.2f = %.2f\n",j,c);
	
	j= d--; 
	printf("%.2f = %.2f\n",j,d);
	
		/* CHAR */
	//operaciones( >>, <<)
	
	char word1;
	
	printf("Ingrese un caracter  ");
	word1=getchar();
	
	fflush(stdin);
	char word2;
	
	printf("Ingrese otro caracter  ");
	word2=getchar();
	
		/* BOOL */
	//operaciones ( &&, ||, !, ==)
	
	
	getch();
	return 0;

}

