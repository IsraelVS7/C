// i dont work 


#include <stdio.h>
#include <string.h>

#define LEN 10000
#define COMP1 1
#define COMP2 0



int main() {
int LONG;
int I, X;
  
char IN[LEN];
char OUT[LEN];
char A;
      
 printf(" TEXT: ");
 gets(IN);        
 LONG  = strlen(IN);

  for (I = 0; I<LONG ; ++I) {
    
        if (IN[I] == '<')
        {  
        X = COMP1;
        }
        if (IN[I] == '>')
        {
        X = COMP2;
        }
        if (X == COMP2)
        {
        OUT[I] = IN[I]; 
        }
    
        if (OUT[I] == '>') 
        {
        OUT[I] = ' ';
        }
        
        
        
  while ((A = getchar));
	    {
		if (A == ' ')
		{
		printf("_");
		} 
	  }
 }
}
