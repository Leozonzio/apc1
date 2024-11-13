#include <stdio.h>

int main() {

    int numeros [10];
    
    for (int i = 0; i < 10; i++){
        scanf("%i", &i);
    }
    int numero;
    scanf("%i",&numero);
    int achou = -1;
    for (achou = 0; achou<10;achou++){
        if (numeros[i] == numero){
            achou = i;
        }
    }
    if (achou < 0){
        printf("O numero não foi encontrado!");
    }
    else  {
        printf("O numero foi encontrado na posição i!");
    }

    return 0;
}