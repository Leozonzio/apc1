#include <stdio.h>
#include <string.h>

int main(){

    char frase[31];

    scanf("%s", frase);

    char letra;

    scanf("%s", letra);

    int quantidade = 0;

    for(int i = 0; i<strlen(frase); i++){
        if (frase[i] == letra){
            quantidade++;
        }
    }

    if(quantidade > 0){
        printf("%i", quantidade);
    }else{
        printf("A frase não contem a letra!");
    }

    return 0;
}