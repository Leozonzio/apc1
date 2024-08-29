#include <stdio.h>
#include <limits.h>

int main() {

  printf("O tipo 'char' aceita valores entre %i e %i.\n", CHAR_MIN, CHAR_MAX);
  printf("O tipo 'float' aceita valores entre %E e %E.\n", FLT_MIN, FLT_MAX);
  printf("O tipo 'double' aceita valores entre %E e %E.\n", DBL_MIN, DBL_MAX);
  
  
  return 0;
}