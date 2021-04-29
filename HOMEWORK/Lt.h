#define MAX 80
typedef struct treenode {
  char* user;
  char* password; 
  struct treenode* rigthuser;
  struct treenode* leftuser;
  unsigned int deep;
} node;

char line[MAX];
char password[MAX];
char user[MAX];

int saca(); 
void get (char l[MAX],char p[MAX],char u[MAX]); 
node* insert(char* u, char* p, node* pos, int d); 
void alpha(node* position);