#include <stdio.h>

int main() {

    char operacao;

    printf("Insira a operacao:");
    scanf("%c", &operacao);

    float numero1,numero2;

    printf("Insira o numero 1:");
    scanf("%f",&numero1);
    printf("Insira o numero 2:");
    scanf("%f",&numero2);

    switch (operacao){
        case '+' : printf("%i+%i = %i\n",numero1, numero2, numero1 + numero2); break;
        case '-' : printf("%i-%i = %i\n",numero1, numero2, numero1 - numero2); break;
        case '*' : printf("%i*%i = %i\n",numero1, numero2, numero1 * numero2); break;
        case '/' : printf("%i/%i = %i\n",numero1, numero2, numero1 / numero2); break;
        default : printf("Operacao invalida!\n"); break;
    }

    return 0;
}