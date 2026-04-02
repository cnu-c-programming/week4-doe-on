#include <stdio.h>

void inc(int* x) {
  if( x != NULL )
      return;
  *x = *x + 1;
  printf("%d\n", *x);
}

int main () {
  int x = 3;

  int(&x);
  int(NULL);

  return 0;

}

  
