#include <stdio.h>
#include <stdlib.h>

#define N 10

void decompose(double x, long *int_part, double *frac_part);

void max_min(int a[], int n, int *max, int *min);

int *find_middle(int a[], int n);

void avg_sum(double a[], int n, double *avg, double *sum);

void swap(int *p, int *q);

void print_message(int a[], int n);



int main(void) {

  int a[] = {1, 5, 3, 6, 5, 7};
  print_message(a, 6);
  
  return 0;
}



void decompose(double x, long *int_part, double *frac_part) {
  *int_part = (long) x;
  *frac_part = x - *int_part;
}

void max_min(int a[], int n, int *max, int *min) {
  int i;
  *max = *min = a[0];
  for (i = 1; i < n; i++) {
    if (a[i] > *max) {
      *max = a[i];
    } else if (a[i] < *min) {
      *min = a[i];
    }
  }
}

int *find_middle(int a[], int n) {
  return &a[n/2];
}

void avg_sum(double a[], int n, double *avg, double *sum) {
  int i;
  *sum = 0.0;
  for (i = 0; i < n; i++) {
    *sum += a[i];
  }
  *avg = *sum / n;
}

void swap(int *p, int *q) {
  int temp;
  temp = *p;
  *p = *q;
  *q = temp;
}


void print_message(int a[], int n) {
  int *p;
  for (p = a; p < a + n; p++) {
    printf("%i\n", *p);
  }
}
