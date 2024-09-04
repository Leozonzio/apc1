#include <stdio.h>

int main() {
  char produto[21];
  int quantidade = 0;
  float valor = 0.0f;

  scanf("%s %i %f", &produto, &quantidade, &valor);

  printf("===============\n\t\tPEDIDO\n===============\nProduto       QTD\t\tValor Unit\n%s\t\t%i\t\t%f\n", produto, quantidade, valor);
  return 0;
}