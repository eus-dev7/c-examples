#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int numero1, numero2, opcion=0;

  printf("\n Adivinar numero");
  printf("\n 1 - Comenzar.");
  printf("\n 2 - Salir.\n");
  printf("\n Introduce una opcion:");
  scanf("%d",&opcion);

  while (opcion!=2)
  {
      //Origina aleatoriamente numeros entre 0 y 99
      numero1 = rand() % 100;
      
      printf("\n Introduce numero: ");
      scanf("%d",&numero2);
      
      while(numero1!=numero2)
      {
          if (numero1>numero2)
              printf("Es mayor");
          else
            printf("Es menor");
          printf("\n Introduce numero: ");
          scanf("%d",&numero2);
      }
      printf("\n Has acertado! \n");
      printf("\n 1 - Jugar de nuevo.");
      printf("\n 2 - Salir.");
      printf("\n Introduce una opcion:");
      scanf("%d",&opcion);
  } 
  system("PAUSE");     
  return 0;
}