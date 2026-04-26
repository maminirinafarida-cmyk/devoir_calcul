#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (int argc,char *argv[])
{
  if (argc!=2)
  {
    printf("erreur"); //il faut donner x
    printf("utilisation: ./calcul 3\n");
  return(1);
  }
  
//Convertir le texte en nombre 
  int x = atoi(argv[1]);
  
//Calcul 
  double etape1 = x+1;
  double etape2 = log(etape1);
  double etape3 = cos(etape2);
  double f = etape3-6;
  
//Afficher le resultat 
  printf("f(%d)=%.2f\n",x,f);
  return(0);
}
