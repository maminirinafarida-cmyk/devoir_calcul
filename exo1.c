#include <stdio.h>
#include <stdlib.h>
int main (int argc,char *argv[])
{
  if (argc!=2)
  {
  printf("erreur"); //il faut donner x
  printf("utilisation: ./calcul 5\n");
  return (1);
  }
  
  //Convertir le texte en nombre 
  int x = atoi(argv[1]);
  
  //Calcul
  int f = 2*x+1;
  
  //Afficher le resutat
  printf("f(%d)=%d\n",x,f);
  return (0);
}

  
  
  
