#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (int argc,char *argv[])
{
  if (argc!=2) 
  {
    printf("erreur"); //il faut donner x);
    printf("utilisation: ./calcul 3\n");
    return (1);
  }
  
  //Convertir le texte en nombre
  int x =atoi(argv[1]);
  
  //Verifier que x est positif 
  if (x<=0)
  {
    printf("erreur"); //ln(x) n'existe que pour x>0
    return (1);
  }
  
  //Calcul 
  double f = log(x)+6;
  
  //Afficher le resultat
  printf("f(%d)=%.2f\n",x,f);
  return (0);
}

