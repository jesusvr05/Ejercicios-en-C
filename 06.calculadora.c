// Realizacion de una calculadora basica aritmetica usando funciones y un subproceso

#include <stdio.h>

int c= 0;
double a, b, resultado  = 0;

int menu(void){
  int opcion_v = 0;
  do{
    printf("Selecciona la operacion a realizar: \n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplcacion\n");
    printf("4. Division\n");
    printf("5. Salir\n");
    
    if((scanf("%d", &c)==1) && ((c >=1)&&(c <= 5))){
      opcion_v = 1;
    }
  } while (opcion_v ==0);
  
  if ((c >=1) && (c<=4)){

  int num_a=0;  
  do {
    
    printf("Ingresa el numero a: \n");
    if ((scanf("%lf", &a)==1)){
      num_a = 1;
    }
    else {
      printf("Entrada invalida, solo se permiten numeros, intente nuevamente.\n");
      scanf("%*[^\n]");
    }
  } while (num_a == 0);
  int num_b = 0;
  do{
    printf("Ingresa el numero b: \n");
    if ((scanf("%lf", &b)==1)){
      num_b = 1;
    }
    else {
      printf("Entrada invalida, solo se permiten numeros, intente nuevamente.\n");
      scanf("%*[^\n]");
    }
    } while (num_b == 0);
  }
  return 0;
}

double suma(double num1, double num2){
  resultado = num1 + num2;
  return resultado; 
}

double resta(double num1, double num2){
  resultado = num1 - num2;
  return resultado;
}

double  multi(double num1, double num2){
  resultado = num1 * num2;
  return resultado;
}

double div(double num1, double num2){
  resultado = num1 / num2;
  return resultado;
}


int main(void){
  
  do{
    menu();
    if (c == 1){
      printf("El resultado de la suma es:  %.2lf\n", suma(a, b));
    }
    else if (c == 2){
      printf("El resultado de la resta es: %.2lf\n", resta(a, b));
    }

    else if (c == 3){
      printf("El resultado de la multiplicacion es: %.2lf\n", multi(a, b));
    }

    else if (c == 4){
      if (b != 0){
        printf("El resultado de la division es: %.2lf\n", div(a, b));
      }
      else{
        printf("Lo siento, no puedes dividir entre cero\n");
      }
    }
  
    else if (c == 5){
      printf("Gracias por usar la aplicacion. Saliendo.\n");
    }
  
    else {
      printf("Opcion no valida, solo se permite la entrada de numeros enteros en un rango de 1 a 5.\n");
    }

  } while (c != 5);

  
  return 0;
}
