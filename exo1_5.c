#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
  int f1 = 2*x+1;
  
  //Afficher le resutat
  printf("f(%d)=%d\n",x,f1);
  
  if (argc!=2)
  {
  printf("erreur"); //il faut donner x
  printf("utilisation: ./calcul 6\n");
  return(1);
  }
  
  
  //calcul 
  int p = 2*pow(x,3)+4*pow(x,2)-1;
  
  //Afficher le resultat
  printf("p(%d)=%d\n",x,p);
  
    if (argc!=2) 
  {
    printf("erreur"); //il faut donner x);
    printf("utilisation: ./calcul 3\n");
    return (1);
  }
  
  //Verifier que x est positif 
  if (x<=0)
  {
    printf("erreur"); //ln(x) n'existe que pour x>0
    return (1);
  }
  
  //Calcul 
  double f2=log(x)+6;
  
  //Afficher le resultat
  printf("f(%d)=%.2f\n",x,f2);
  
    if (argc!=2)
  {
    printf("erreur"); //il faut donner x
    printf("utilisation: ./calcul 3\n");
  return(1);
  }
  
//Calcul 
  double etape1 = x+1;
  double etape2 = log(etape1);
  double etape3 = cos(etape2);
  double f3 = etape3-6;
  
//Afficher le resultat 
  printf("f(%d)=%.2f\n",x,f3);
  
    if (argc!=2)
  {
  printf("erreur"); //il faut donner x
  printf("utilisation:./calcul -2\n");
  return(1);
  }
  
  //Calcul de (x+1) l'argument de log
  int argument = x+1;
  
  //Verifier que l'argument est positif 
  if (argument <= 0)
  {
  printf("erreur"); //ln(argument) n'existe que pour argument>0
  return(1);
  }
  
  //Calcul 
  double f4 = log(argument);
  
  //Afficher le resultat
  printf("f(%d)=%2.f\n",x,f4);
  
  return (0);
}

