#include <stdio.h>

int main() {

    int ano;
    
    printf("Insira o ano: ");
    scanf("%i", &ano);

    if (ano % 4 == 0 || ( ano % 100 == 0 && ano % 400 == 0)){
        printf("O ano eh bissexto!\n");
    }
    else {
        printf("O ano nao eh bissexto!\n");
    }

    return 0;    
}