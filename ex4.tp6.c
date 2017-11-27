#include <stdio.h>
#include <stdlib.h>
void inv_maj ( char *ch) ;
int main()
{   char ch[100];
    printf("Donner une chaine ");
    scanf("%s",&ch);
    inv_maj(ch);
    printf("le resultat = %s",ch);
}
void inv_maj ( char *ch) ;{ 
 
char i; 


for(i=0;ch[i];i++){ 
if(ch[i]>= 'A' && ch[i] <= 'Z') 
ch[i] = ch[i] - 'A' + 'a' ; 
else if (ch[i] >= 'a' && ch[i] <= 'z') 
ch[i]=ch[i]- 'a' +'A'; 
} 
printf("chaine convertie : %s \n",ch); 

return 0;
}
