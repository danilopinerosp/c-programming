#include <stdio.h>
#include <stdlib.h>

short count_digits (long n);

int main (void) {

  // Test 1: n = 0
  
  long n = 0;
  short num_digits1 = count_digits(n);
  printf("%li has %i digits\n", n, num_digits1);

  // Test 2: n < 0
  long m = -159357;
  short num_digits2 = count_digits(m);
  printf("%li has %i digits\n", m, num_digits2);

  // Test 3: n > 0
  long l = 159357;
  short num_digits3 = count_digits(l);
  printf("%li has %i digits\n", l, num_digits3);

  // Test 4: n = 1
  long k = 1;
  short num_digits4 = count_digits(k);
  printf("%li has %i digits\n", k, num_digits4);
  
  return 0;
}

short count_digits (long n)
{
  /* Calculate and return the number of digits of the parameter n*/
  short num_digits = 0;
  while (n)
    {
      num_digits += 1;
      n = n / 10;
    }
  return num_digits;
}
