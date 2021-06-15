#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
  int a;
  int b;
  int c;
}triangle;

double area(triangle tr);

void sort_by_area(triangle *tr, int n);

int main() {
  
  int n;
  scanf("%d", &n);
  triangle *tr = malloc(n * sizeof(triangle));

  for (int i = 0; i < n; i++) {
    scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
  }

  sort_by_area(tr, n);
  for (int i = 0; i < n; i++) {
    printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
  }

  return 0;
}

double area(triangle tr) {
  double result, p, factor;
  p = (tr.a + tr.b + tr.c) / (double)2;
  factor = p*(p-tr.a)*(p-tr.c)*(p-tr.b);
  result = sqrt(factor);
  return result;
}

void sort_by_area(triangle *tr, int n) {
  triangle temp;
  double area_i, area_j;
  int i, j;
  for(i = 0; i < n; i++){
    for(j = i + 1; j < n; j++){
      area_i = area(tr[i]);
      area_j = area(tr[j]);
      temp = tr[i];
      if (area_i > area_j) {
	tr[i] = tr[j];
	tr[j] = temp;
      }
    }
  }
}


