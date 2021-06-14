#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int suma_cuadrada(int a, int b);

void swap(int *a, int * b);

int isPrime(int n);



int main(void) {

  int a, b;
  a = 7;
  b = 17;
  printf("a: %i, b: %i\n", a, b);
  swap(&a, &b);
  printf("a: %i, b: %i\n", a, b);

  
  return 0;
}

int suma_cuadrada(int a, int b) {
  int suma, cuadrado;
  suma = a + b;
  cuadrado = suma * suma;
  return cuadrado;
}

void swap(int *a, int * b) {
  int aux;
  aux = *a;
  *a = *b;
  *b = aux;
}

int isPrime(int n) {
  int result, i;
  result = 1;
  for (i = 2; i < n; i++) {
    if (n % i == 0) {
      result = 0;
      break;
    }
  }
  return result;
}
