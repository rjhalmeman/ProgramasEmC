#include <stdio.h>

int main(void) {
  int x, y, *p;
y = 0; 
p = &y; 
x = *p; 
x = 4; 
(*p)++;
 --x;
 (*p) += x;

  printf("\n x %i",x);
  printf("\n y %i",y);
  printf("\n p %i",*p);

  return 0;
}
