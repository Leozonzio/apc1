#include <stdio.h>

int main() {

    int numero;
    float media;
    printf("Digite um número inteiro:");
    scanf("%i", &numero);
    int numero_e_divisivel_por_2 = numero % 2 == 0;
    if (numero_e_divisivel_por_2) {
        printf("O número %i é par!\n", numero);
    }
    else {
        printf("O numero %i é ímpar\n", numero);
    }
    int idade;
    printf("Digite a sua idade: ");
    scanf("%i", &idade);
    if (idade < 16) {
        printf("Você não pode votar!\n");
    }
    else if (idade < 18 || idade > 70){
        printf("Você pode votar!\n");
    }
    else {
        printf("Você é obrigado a votar!\n");
    }
    
    printf("Digite sua media final: ");
    scanf("%f", &media);
    if (media == 0.0f) {
        printf("A menção é 'SR'.\n");
    }
    else if (media < 3.0f){
        printf("A menção é 'II'.\n");
    }
    else if (media < 5.0f){
        printf("A menção é 'MI'.\n");
    }
    else if (media < 7.0f){
        printf("A menção é 'MM'.\n");
    }
    else if (media < 9.0f) {
        printf("A menção é 'MS'.\n");
    }
    else {
        printf("A menção é 'SS'.\n");
    }


    return 0;
}