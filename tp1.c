#include <stdio.h>


void nbrPa(int limite);
int main()
{
 
  int limite;
  char reponse;

  int n, somme_diviseur, diviseur; //int n, somme_diviseur, diviseur; 
  printf("\nEntrez votre nombre:");
  scanf("%d",&limite);

  
    for(n=1; n<=limite; n++)
    {
      somme_diviseur=0;
      for(diviseur=1; diviseur<=n/2; diviseur++)
        if(n%diviseur==0)
          somme_diviseur+=diviseur;
        if(somme_diviseur==n)
      
 
        printf("%d est un nombre parfait\n", n);
       
    
  
 //printf("\nVoulez-vous continuer(o/n)?");
  // scanf("%c",&reponse);
    }
      
  //} while (reponse=='o');
  
  return 0;
}


  
