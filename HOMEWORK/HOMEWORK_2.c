#include <stdio.h>
#include <math.h>



int main () {
	int K, REGRESO ;
	int Y [1000];       // Numero Binario
	int X, I, Z;    // Numero Primo, Decimal Entero 
    int C = 0 ;  // Evaluacion de numero Primo 
 	
 	REGRESO=1;
 	
 	
 	//while (REGRESO ==1 ){
	 
 	
	printf(" Put a decimal integer non-negative number \n  " );
	scanf("%i", &X);
     
     	for ( I = 1; I <= X ; I++ )  // inicia contador de divisores 
    {
		
		if (X % I == 0)  // evalua expresión de residuo  
		{
		  C = C + 1 ;  
		}
	}
	
	
	    if (C <= 2)           // al tener 2 dividendos es un numero primo 
	{
        printf(" Its a Prime number \n");
	
	
	
    while ( X > 0 )
    {
      Y[Z] =  X % 2;
      X /= 2;
      Z = Z + 1;
    }
    
    printf(" Your binary number is:  ");
    for (K = Z - 1  ;  K >= 0  ; --K )
    { 
        
        
        printf ("%d ", Y[K]);
     
     
     
    }
	}
	
	    else 
	{
	    printf(" Wrong Input");
	}

           // printf  (" \n");
           //printf (" Press 1 to retry \n"); 
           //printf (" Press 2 to quit \n");
		   
		   scanf ( "%d",&REGRESO ); 
         
	
//    }

	
}
