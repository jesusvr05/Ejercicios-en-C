// Hacer un programa que identifique cuando un año es bisiesto o no

#include <stdio.h>

int main(void){
  int anio = 0;
  printf("Ingrese el año a determinar si es o no bisiesto: \n");
  if (scanf("%d", &anio) != 1) return 1;
  
  if ((anio % 400 == 0) || ((anio % 4 == 0)& (anio % 100 != 0)))
    printf("Es bisiesto\n");
  else
    printf("No es bisiesto\n");
  return 0;
}
