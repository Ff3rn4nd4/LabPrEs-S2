// Practica 2 (07-02-20)

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>
#include <iostream>
using namespace std;

int main () {

		/* ENTEROS */
	
	printf("\nOperaciones con enteros");	
	//declaración de variables
			int a =5, b =7, f;
	
	//operaciónes (+,-,*,/,%, ++, --)
	
	f= a+b;
		printf("\n%d + %d = %d\n", a,b,a+b);
	
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
	
	printf("\nOperaciones con flotantes");	

	//operaciones (+,-,*,/,++, --, ><,==,>=, <=)
	
	j=c+d;
		printf("\n%.2f + %.2f = %.2f\n",c,d,c+d);
	
	j=c-d;
		printf("%.2f - %.2f = %.2f\n",c,d,c-d);
	
	j=c*d;
		printf("%.2f * %.2f = %.2f\n",c,d,c*d);
	
	j=c/d;
		printf("%.2f / %.2f = %.2f\n",c,d,c/d);
	
	j= c++;
		printf("%.2f = %.2f\n",j,c);
	
	j= d--; 
		printf("%.2f = %.2f\n",j,d);
	
	
		/* CHAR */
		
	printf("\nTipo char");	
	
		fflush(stdin);
	
	char word1;
		printf("\nIngrese un caracter: ");
			word1=getchar();
	
		fflush(stdin);
	char word2;
		printf("Ingrese otro caracter:");
			word2=getchar();
	
	
		/* BOOL */
		
	//en pantalla se muestra true=1 false=0
	//operaciones ( &&, ||, !, ==)
	
	printf("\nOperaciones con booleanos");
	
	// ==
	printf("\ningrese numero:");
		bool k;
		int l;
		cin >> l;
		 k= l== 9;
			cout<< k << endl;
			printf("si da 0 no es igual a 9 y si da 1 es igual a 9");
	
	// and (&&)
	printf("\nIngrese un numero:");
		int q;
		cin >>q;
		bool t;
		bool mayor_que5 = q > 5;
		bool menor_que8 = q < 8;
			t= mayor_que5 && menor_que8;
			cout << t << endl;
			printf("\nla condicion es que el numero dado sea mayor que 5 y menor que 8, si da 1 lo cumple, si da 0 no lo cumple");

	// or (||)
	printf("\ningrese un numero:");
		int z;
		cin >>z;
		bool n;
		bool mayor_que3 = z > 3;
		bool menor_que2 = z < 2;
			n= mayor_que3 || menor_que2;
			 cout << n << endl;
			 printf("\nla condicion es que el numero dado sea mayor que 3 o menor que 2 , si da 1 lo cumple, si da 0 no lo cumple");
		
	
	// not (!)
		printf("\ningrese un numero:");
		int m;
		cin >>m;
		bool cond, cond1, cond2, cond3;
		cond1 = m > 3 && m < 5;
		cond2 = m > 3 || m < 5;
		cond3: !false;
		// esto quiere decir que  elestar dentro es lo mismo que estar fuera
			 cout << cond << m << cond1<< endl;
			 printf("\nla condicion es que el numero dado este dentro de los rangos , si da 1 lo cumple, si da 0 no lo cumple");
	

	getch();
	return 0;

}

