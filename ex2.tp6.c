#include<stdio.h>
#include<string.h>

void conj  ( char *x);

int main()
{   char ch[100];
    printf("donner un verb : ");
    scanf("%s",&ch);
    conj(ch);
}


void conj  ( char *x);
{
int i;
char pronoms[6][5]={"je","tu","il","nous","vous","ils"};
char termes[6][4]={"e","es","e","ons","ez","ent"};
 
verbe[strlen(verbe) - 2] = '\0';
 
for (i = 0; i < 6; i++){
printf("%s %s%s\n",pronoms[i],verbe,termes[i]);
}
}
