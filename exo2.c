#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc,char *argv[])
{
  if(argc!=2)
  {
  printf("erreur"); //il faut donner x
  printf("utilisation: ./calcul 6\n");
  return(1);
  }
  
  //Convertir le texte en nombre 
  int x = atoi(argv[1]);
  
  //calcul 
  int p = 2*pow(x,3)+4*pow(x,2)-1;
  
  //Afficher le resultat
  printf("p(%d)=%d\n",x,p);
  return (0);
}

