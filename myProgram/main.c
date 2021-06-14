#include <stdio.h>
#include <stdlib.h>

#include "example.h"

int main(void) {

  int result, a, b;
  a = 3;
  b = 6;
  result = theSum(a, b);
  printf("The sum is %d\n", result);
  
  return 0;
}
