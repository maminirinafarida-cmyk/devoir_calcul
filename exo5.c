#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (int argc,char *argv[])
{
  if (argc!=2)
  {
  printf("erreur"); //il faut donner x
  printf("utilisation:./calcul -2\n");
  return(1);
  }
  
  //Convertir le texte en nombre 
  int x = atoi(argv[1]);
  
  //Calcul de (x+1) l'argument de log
  int argument = x+1;
  
  //Verifier que l'argument est positif 
  if (argument <= 0)
  {
  printf("erreur"); //ln(argument) n'existe que pour argument>0
  return(1);
  }
  
  //Calcul 
  double f = log(argument);
  
  //Afficher le resultat
  printf("f(%d)=%2.f\n",x,f);
  return(0);
}

  
