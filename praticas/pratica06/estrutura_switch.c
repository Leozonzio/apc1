#include <stdio.h>

int main() {

    int nota;
    printf("Insira o valor da nota: ");
    scanf("%i", &nota);

    switch (nota) {
        case 1: printf("Você ganhou '*'.\n");
        case 2: printf("Você ganhou '**'.\n");
        case 3: printf("Você ganhou '***'.\n");
        case 4: printf("Você ganhou '****'.\n");
        case 5: printf("Você ganhou '*****'.\n");
        default: printf("Nota inválida! Tente novamente.\n");
    }
    
    return 0;
}