// Ejercicio que hace una simulacion de ahorro con depositos mensuales
#include <stdio.h>

int main(void){
  float meta, deposito_mensual, saldo, dif_meta, ahorro  = 0;
  int meses, i = 0;
  do
  {
    printf("Ingrese la cantidad de dinero que desea ahorrar: \n");
    scanf("%f", &meta);
    if (meta <= 0)
      printf("Su meta debe ser mayor a 0\n");    
  }
  while( 0 > meta);

  do
  {
    printf("Ingrese el deposito mensual: \n");
    scanf("%f", &deposito_mensual);
    if (deposito_mensual <= 0)
      printf("Su deposito debe ser mayor a 0\n");
  }
  while (0 > deposito_mensual);
  do
  {
    printf("Ingrese el saldo actual en su cuenta: \n");
    scanf("%f", &saldo);
    if (saldo < 0)
      printf("Su saldo no puede ser negativo\n");
  }
  while (saldo < 0);

  if (saldo > meta)
    printf("Su saldo actual ya cubre su meta, no necesita ahorrar más.\n");
  else{
      //Calculamos los meses necesarios para llegar a la meta
    meses = 0;
    dif_meta = meta - saldo;
    meses = dif_meta / deposito_mensual;
    printf("Usted tendra que ahorrar durante %d meses\n", meses);
    for (i = 1; i<=meses; i++)
    {
      ahorro = (saldo + ((deposito_mensual) * i ));
      printf("La cantidad ahorrada en el mes %d es de: %.2f \n", i, ahorro);
    }
    }
}
