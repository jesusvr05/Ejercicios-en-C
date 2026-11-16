// Ejercicio para generar la tarifa de estacionamiento un estacionamiento
// Por 2 horas: 20
// Menor a 5 horas: 15
// Mayor a 5 horas: 10

#include <stdio.h>

int main(void){
  float horas, costo_total = 0;

  printf("Ingrese el numero de horas en el estacionamiento: \n");
  if (scanf("%f", &horas) != 1) return 1;

  if (horas <= 2)
    costo_total = horas * 20;
  else if ((2 < horas) & (horas <= 5))
    costo_total = (((horas - 2)* 15)+ 40);
  else if (horas > 5)
    costo_total = (((horas - 5)* 10) + 85);
  printf("El costo total es de: %.2f\n", costo_total);
  return 0;
}
