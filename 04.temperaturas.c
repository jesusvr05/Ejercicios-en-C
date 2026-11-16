// Programa que hace una clasificacion de temperaturas

#include <stdio.h>

int main(void){
  float temperatura = 0;

  printf("Ingresa la temperatura: \n");
  if (scanf("%f", &temperatura) != 1) return 1;

  if (temperatura >= 35)
    printf("Muy caluroso\n");
  if ((temperatura < 35) & (temperatura >= 25))
    printf("Caluroso\n");
  if ((temperatura < 25) & (temperatura >= 10))
    printf("Templado\n");
  if (temperatura <10)
    printf("Frio\n");
  return 0;
}
