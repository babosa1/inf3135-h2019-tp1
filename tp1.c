#include <stdio.h>
#include<ctype.h>


void nbrPa(int limite);
int main()
{
 FILE* cp=NULL;
  FILE* code=NULL;
char CODE_permanent[12];
  int limite;
  char reponse;
  int n, somme_diviseur, diviseur; //int n, somme_diviseur, diviseur; 
  cp=fopen("cp.txt","r");
  if(cp!=NULL){
    do{
       fgets(CODE_permanent,12,stdin);
      printf("%c\n",CODE_permanent);
      printf("%c",getchar());
    } while (CODE_permanent !=EOF);
    fclose(cp);
  }
    code=fopen("code.txt","w");
    if(code!= NULL){
  printf("\nEntrez votre nombre:");
  while(scanf("%d",&limite));{
    for(n=1; n<=limite; n++)
    {
      somme_diviseur=0;
      for(diviseur=1; diviseur<=n/2; diviseur++)
        if(n%diviseur==0)
          somme_diviseur+=diviseur;
        if(somme_diviseur==n)
             printf("%d est un nombre parfait", n);
    }
       
  }
  
 //printf("\nVoulez-vous continuer(o/n)?");
  // scanf("%c",&reponse);
    }
      
  //} while (reponse=='o');
  
  return 0;
}


  
