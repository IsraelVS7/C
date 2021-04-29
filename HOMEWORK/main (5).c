
#include <stdio.h>
#include <string.h> // strstr
#include <stdlib.h> // malloc & free
#include "Lt.h"

node* insert(char* u, char* p, node* pos, int d)
{
     node* temp;
     if (pos == NULL)
    {
         pos = (node*)malloc(sizeof(node));
         pos->user = u;
         pos->password = p;
         pos->deep = d;
         printf ("Registered <%s>\n\n", u, p);
    } 
 
        else if (strcmp(pos->user, u)>0) 
            {       
                temp = insert(u, p, pos->leftuser, d + 1);
                    if (pos->leftuser == NULL) 
                        {
	                        pos->leftuser = temp;
                        }
            } 
            
        else if (strcmp(pos->user, u)<0)
            {
                temp = insert(u, p, pos->rigthuser, d + 1); 
     
                    if (pos->rigthuser == NULL) 
                        {
	                        pos->rigthuser = temp;
                        }
            }
     return pos;
    }

    void alpha(node* position)
        {
            if (position != NULL) 
                {
                    alpha(position->leftuser);
                    if (position->password!=NULL)
                        {
                            printf("%s ", position->user);
                        }
            alpha(position->rigthuser);
            }
        }



int main() {
  extern char line[];
  node* n = NULL;
  node* tree = NULL; 
  int i;
  int l = 0;
  char* u;//arreglo
  char* p;
  int indicador=0;
  int contadorespacios =0; 
  int j;
  printf("add User // Pasword  \n");
  printf("tap view to se names \n");
  while ((l = saca()) == 0) {
      contadorespacios=0;
    for (j=0; j<MAX; j++){
        if (line[j]==' '||line[j]=='\t'){
            contadorespacios++;
        }
    }
    if (strstr(line, "del") != NULL&&strlen(line)>=7&&contadorespacios==2) { // if we found  "del" we need to delete
      get(line, password, user);
      u = (char*)malloc(sizeof(int*) * strlen(user));
      p = (char*)malloc(sizeof(int*) * strlen(password));
      for (i=0; i<strlen(user);i++){
          u[i]=user[i];
      }
      for (i=0; i<strlen(password);i++){
          p[i]=password[i];
      }

    

      indicador=0;
      contadorespacios=0;
    }
    
    else if (strstr(line, "add") != NULL&&strlen(line)>=7&&contadorespacios==2) { 
      u = (char*)malloc(sizeof(int*) * strlen(user));
      p = (char*)malloc(sizeof(int*) * strlen(password));
      for (i=0; i<strlen(user);i++){
          u[i]=user[i];
      }
      for (i=0; i<strlen(password);i++){
          p[i]=password[i];
      }

      if (strlen(password)>0&&strlen(user)>0){
      n = insert(u,p, tree, 0); 
	  if (tree == NULL) {
	    tree = n; 
	    }
	   contadorespacios=0;
      }
      else if (strlen(password)<=0||strlen(user)<=0){
          printf ("error\n\n");
      }
      }
      
    else if (strstr(line, "view") != NULL&&strlen(line)==4) { 
      alpha(tree);
      printf("\n\n");
      contadorespacios=0;
    }
    else{
        printf("error\n\n");
        contadorespacios=0;
    }
    
    
  }

  return 0;
}

int saca() { 
  extern char line[];
  int c, i = 0;

  for (; i < MAX - 1 && (c = getchar()) != EOF && c != '\n';) {

        line[i++] = c;

  }
  line[i] = '\0'; // caracter end of string
  return c == EOF;
}

void get (char l[MAX],char p[MAX],char u[MAX]){
    int a = 4, b = 0, c=0;
    while (l[a]!=' '&&l[a]!='\t'){
        u[b]=l[a];
        b++;
        a++;
    }
    u[b]='\0';
    int longitud = strlen(u);
    a++;
    while (l[a]!=' '&&l[a]!='\t'&&l[a]!='\0'){
       p[c]=l[a];
       c++;
       a++;
    }
    p[c]='\0';
    int longitud2 = strlen(p);

}