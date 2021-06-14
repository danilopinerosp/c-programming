#include <stdio.h>
#include <stdlib.h>

int isPrime(int n);

int main(void) {

  int n;
  printf("Number:\n>>");
  scanf(" %d", &n);

  if (isPrime(n)) {
    printf("%d is prime\n", n);
  } else {
    printf("%d is not prime\n", n);
  }
  return 0;
}

int isPrime(int n) {
  int result = 1;
  if (n <= 1) {
    result = 0;
   }
  int k = 2;
  while (k <= n / 2 + 1) {
    if (n % k == 0) {
      result = 0;
      break;
    }
    k++;
  }
  return result;
}
