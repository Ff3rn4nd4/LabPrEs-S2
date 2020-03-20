//llenar una matriz de 3x3, un valor escalar y mult la matriz porel escalar (19/03/20)

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int matriz[3][3]={{0}};
	int x,y,esc;
	
	
	printf( "\n\tMatriz\n" );
	
    for(x=0;x<3;x++)
        for(y=0;y<3;y++) 
		{
            printf( "Introduzca los valores de la posici%cn [%d][%d]: \n",162,x,y);
            scanf( "%d", &matriz[x][y]);
        }
        
 	printf( "\nIntroduzca un valor escalar: \n" );
    scanf( "%d",&esc);
    
    for(x=0;x<3;x++)
        for(y=0;y<3;y++)
            matriz[x][y] *= esc;
 
 	printf("\nImpresion de la matriz modificada");
   for(x=0;x<3;x++) 
   {
        printf( "\n" );
        for(y=0;y<3;y++) 
		{
            printf("\t %d ",matriz[x][y]);
        }
    }
 
    printf( "\n" );
	
	system("pause");
	return 0;
}
