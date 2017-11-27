#include <stdio.h>
#include <stdlib.h>

char remplace( char *ch ,char *old , char *new);
int main()
{   char a[100],b[100],c[100];
    printf("donner une chaine  :");
    scanf("%s/%s/%s",&a,&b,&c);
    remplace(a,b,c);
    printf("le resultat = %s",a);


}


char remplace( char *ch ,char *old , char *new)
{   char ch1[100];
    int i ;
    strcat(ch,"");
    for ( i = 0 ; i <strlen(ch) ; i ++ )
    {  if (ch1[i] == old)
       ch1[i] = new;
       else
       ch1[i] = ch1[i];
    }
    *ch=ch1 ;
}
