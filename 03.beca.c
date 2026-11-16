// Programa que evalua condiciones para ser acredor de una beca
#include <stdio.h>

int main(void){
  float promedio = 0;
  int regular = 0;

  printf("¿Cual es tu promedio? \n");
  if (scanf("%f", &promedio) != 1) return 1;
  printf("¿Eres regular? (1 = si/ 0 = no) \n");
  if (scanf("%d", &regular) != 1) return 1;

  if (regular == 1)
    if (promedio >= 9.5)
      printf("Beca aprobada x 1.5\n");
    else if (promedio >= 8.5)
      printf("Beca otorgada\n");
    else
      printf("Beca no otorgada\n");
  else
    printf("Beca no aprobada\n");
  return 0;
}
