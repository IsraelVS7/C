// this is a mess but is my mess
// i think this was a  good one but i cannot solve it 


#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0


int main(int argc, char *argv[]) {

 
  //int Y;
  int  STRING;  // cadenas        
  int j;        // Selector de operaciones para el bucle 
  int PAR, COM, NUMB= 0 ;
    
    printf("TYPE THE OPERATION, PRESS ENTER AND PUT THE TEXT\n\n ");
    printf("1: For numbers \n ");
    printf("2: For Parenthesis and Punctuation  \n ");
    scanf( "%d",  &j );  // ingresar modo 
    //scanf( "%c",  & STRING );
        switch (j)
        {
            case 1: // numeros 
            {
                system("clear");
                printf ("Number mode\n");
                //printf ("NUMERO0");
                
                
                
                //scanf("%s", STRING);
                while ((STRING = getchar()) != EOF)
                    {
                       switch(STRING)
                            {
                           
                             case '(':
   			                    PAR = TRUE;
   			                    putchar(STRING);
   			                        break;
   			                    
   		                     case ')':
   			                    PAR= FALSE;
   			                    putchar(STRING);
   			                        break; 
   			                    
   			                case '\"':
   			                    putchar(STRING);
   			                    COM++;
   			                        break;
   			                    
   		                    case '\'':
   			                    putchar(STRING);
   			                    COM++;
							        break; 
                            
							 if(PAR==1 || COM==1)
							    {
				                 putchar(STRING);
							    }
							else (COM==2);
							    {
							      COM=0;
							    }
				         	 if (STRING=='1'||STRING=='2'||STRING=='3'||STRING=='4'||STRING=='5'||STRING=='6'||STRING=='7'||STRING=='8'||STRING=='9'||STRING=='0')
							    {
                                    NUMB++;
                                }else
								{
                                    NUMB=0;
                                }
                                if (NUMB==1)
								{
                                    putchar('X');
                                }
                                if (NUMB==0)
								{
                                    putchar(STRING);
                                }		 		    		    
                        }
                
                //printf("%C", STRING);
                    break;
            }
            
            case 2: // parentesis y puntuaciÃ³n 
            {
                system("clear");
                printf("Punctuation mode\n");
                
                //scanf("%s", STRING);
                while ((STRING = getchar()) != EOF)
                    {
                          



                    }
                //printf("%i", STRING);
                    break; 
                
            }
        }

	return 0;
}
}