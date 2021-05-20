
#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    
    
printf ("\t----------  ----------    ----    ---    --- ---- ----  ---- ---------- ----------\n");   
printf ("\t----------  ---------- ---------- ---    --- ---- ----  ---- ---------- ----------\n");
printf ("\t----        -----      ----  ---- ---    --- ---- ----- ---- ---        -----     \n");
printf ("\t----        ---------- ----  ---- ----  ---- ---- ---------- --- ------ ----------\n");
printf ("\t----             ----- ---------- ---------- ---- ---  ----- ---   ----      -----\n");
printf ("\t----------  ---------- ----  ----   ------   ---- ---   ---- ----   --- ----------\n");
printf ("\t----------  ---------- ----  ----    ----    ---- ---   ---- ---------- ----------\n");
printf ("\n\n");
int y; // water
int x; // ligth 
int z; // gas
int u; // movile 
int v; // food 
int repeat;
 
float water;
float ligth;
float gas;
float movile; 
float food;

float expences;
float salary;
float salary2;
    printf ("\t--------------------------------------------------------------------------------------\n");
    printf ( "\t\t\t\t\t Welcome to C-Savings\n" );                                                                      // Presentacian del programa  & instrucciones de uso
    printf ("\t--------------------------------------------------------------------------------------\n");
    printf ("\n\n");
    printf ("----------------------------------------------------------------------------------------------\n");
    printf ("----------------------------------------------------------------------------------------------\n");
    printf ("--------------------    To navigate type a number and then press enter.   --------------------\n\n"); 
    printf ("--------------------    Press 1: To check how much do you spend per month --------------------\n");
    printf ("--------------------    Press 2: If you want to calculate a saving amount --------------------\n");
    printf ("--------------------    Press 3: For more information                     --------------------\n");
    printf ("----------------------------------------------------------------------------------------------\n");
    printf ("----------------------------------------------------------------------------------------------\n");
      int j;                                                             // variable de desplazamaiento del menu 
    scanf ( "%d",  &j );                                                 // Comando para desplazar el menu
 while(repeat==1)
{
 
        switch (j)
        {
            

            case 1:
            
                printf ("\n\n");
			    printf("\t Let's check how much do you spend  monthly in necesary things.\n");
				printf("\t Type how much do you pay for the next services\n\n");
				
				printf("If you  pay for this service tap '1' otherwise tap  '0'\n");
				printf ("Water:\n");
				scanf("%i", &y);   
				    if (y==1)
				       {
				           printf ("How much do you pay for water service?\n");
				           scanf("%f", &water);   
				       }
				    else if (y==0)
				       {
				           water=0;
				       }
			    printf("If you  pay for this service tap '1' otherwise tap  '0'\n");
				printf ("ligth:\n");
				scanf("%i", &x);
				     if (x==1)
				       {
				           printf ("How much do you pay for ligth service?\n");
				           scanf("%f", &ligth);   
				       }
				    else if (x==0)
				       {
				           ligth=0;
				       }
				printf("If you  pay for this service tap '1' otherwise tap  '0'\n");
				printf ("Gas:\n");
				scanf("%i", &z);
                    if (z==1)
				       {
				           printf ("How much do you pay for gas service?\n");
				           scanf("%f", &gas);   
				       }
				    else if (z==0)
				       {
				           gas=0;
				       }
				printf("If you  pay for this service tap '1' otherwise tap  '0'\n");
				printf ("Movile services:\n");
				scanf("%i", &u);
                    if (u==1)
				       {   
				           printf ("How much do you pay for movile service?\n");
				           scanf("%f", &movile);   
				       }
				    else if (u==0)
				       {
				           movile=0;
				       }
				printf("If you  pay for this service tap '1' otherwise tap  '0'\n");
				printf ("Food:\n");
			    scanf("%i", &v);
	                 if (v==1)
				       {
				           printf ("How much do you spend in food?\n");
				           scanf("%f", &food);   
				       }
				    else if (v==0)
				       {
				           food=0;
				       }
				         
				
                float total;
                total=food+movile+gas+ligth+water;
                printf(" The amount that you spend montly is:\n");
                printf ("----------------------------------------------------------------------------------------------\n");
                printf("                                             %.02f ", total);
                printf("\n"); 
                printf ("----------------------------------------------------------------------------------------------\n");
                printf("\n\n");
            break;
            
            case 2:
           
                printf(" In order to calculate the amount that you want to save let us know a few  things \n\n");
                printf ("type ypur salary it can be per week or biweekly\n"); 
               
                scanf ( "%f",  &salary); 
                
                
                printf (" If your salary per week tap 1\n" );                  // pasar todo a unidades de dias 
                printf (" If your salary is biweekly tap 2\n" );
                int conv;                                                      // variable para transformar a dias
                scanf("%d", &conv);
                    if (conv==1)                                                
                        {
                            salary2= salary/7;
                             //printf("%.02f", salary);                        // Comprobacion de calculo 
                                
                             
                        }
    
                    else if   (conv==2)
                        {
                            salary2= salary/15;
                            // printf("%.02f", salary);                         // Comprobacion de calculo 
                        }
                
                printf ("Type the amount of  money that you spend per month\n\n"); 
              
                scanf("%f", &expences);
                expences=expences/30;
                
                printf ("Now Choose What you want to calculate:\n");
                printf ("----------------------------------------------------------------------------------------------\n");
                printf ("-        Press 4 to Select the amount of money that you can reach in a certain time          -\n");
                printf ("-Press 5 in Order to calculate the amount time that going  to take you to reach cerain amount-\n");
                printf ("----------------------------------------------------------------------------------------------\n");
                     
                    int i;                                                                   //Cambio para modo de calculo entre tiempo y  cantidad para ahorrar;
                    scanf("%d", &i);
                     switch (i);
                        {
                            if (i== 4)                                                        // calculo de dinero en un cierto tiempo 
                            {
                                printf(" How much time would you like to take   \n");
                                printf(" Put the quantity in days\n\n");
                                int tie;
                                scanf("%d", &tie);
                                
                                float totalearning;                                         // variable para  reconocer ganancias 
                                          
                                totalearning= (salary2 - expences)* tie;                    // operacion matematica para reconocer el total de ganancias
                                
                                    if (expences > salary2)
                                    {
                                        printf ("ERROR CHECK YOUR FINANCES YOU SPEND TOO MUCH FOR YOUR SALARY\n\n");   // condicional para indicar si las ganacias son menores que los gastos 
                                    }
                                    else
                                    {
                                        printf("\t The total of your savings should be:\n");
                                        printf ("----------------------------------------------------------------------------------------------\n");
                                        printf ("                                          %.2f\n",totalearning);                                           // cantidad  calculada
                                        printf ("----------------------------------------------------------------------------------------------\n");
                                        printf("\n\n");
                                    }
                            }
                            
                            
                            else if (i==5)                                                        // calculo de tiempo para cierto dinero 
                            {
                                printf(" Type the amount that you want to save\n\n");
                                int amount;
                                scanf("%d", &amount);
                                
                                int time1;                                                    // valiable de tiempo 
                                
                                time1= amount/ ( salary2 - expences );
                                
                                 if (expences > salary2)
                                    {
                                        printf ("ERROR CHECK YOUR FINANCES YOU SPEND TOO MUCH FOR YOUR SALARY\n\n");   // condicional para indicar si las ganacias son menores que los gastos 
                                    }
                                    else
                                    {
                                        printf(" You will reach the amount in:\n");
                                        printf("----------------------------------------------------------------------------------------------\n");
                                        printf("                                             %d\n",time1);                          // cantidad  calculada
                                        printf("                                                  days\n");
                                        printf("----------------------------------------------------------------------------------------------\n");
                                        printf("\n\n");
                                    }
                            }  
                            
                           //poner mensaje para diferenciar cualquier otra letra y escribir invalid imput y regresar  
                        }
                        
                        
            
            break;
            
            case 3:
                printf ("----------------------------------------------------------------------------------------------\n");
                printf ("-                              Universidad Autonoma De Nuevo Leon                            -\n\n");
                printf ("-                          Facultad de Ingenrieria Mecanica Electrica                        -\n\n");
                printf ("-                          Developed by Israel Emiliano Vera Solis                           -\n\n");
                printf ("-                                  Student number: 1921191                                   -\n\n");
                printf ("----------------------------------------------------------------------------------------------\n");
            break;
            
            default:
            printf ("ERROR \n\n"); 
            printf ("Press a Valid entry  \n\n"); 
            
}
printf("----------------------------------------------------------------------------------------------\n");
printf ("                                   If you want to repeat Press 1   \n\n"); 
printf ("----------------------------------------------------------------------------------------------\n\n");
scanf("%i",&repeat);
printf ("----------------------------------------------------------------------------------------------\n");
printf (" To navigate press type the entry that you want \n\n"); 
printf (" Press 1 to check your expences by month\n");
printf (" Press 2 if you want to calculate a saving amount\n");
printf (" Press 3 for more information \n");
printf ("----------------------------------------------------------------------------------------------\n");
scanf ( "%d",  &j ); 
        }

    return 0;
}