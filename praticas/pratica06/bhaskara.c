#include <stdio.h>
#include <math.h>

int main(){

    int a,b,c;
    float x1,x2;

    printf("Insira a variavel a: ");
    scanf("%i",&a);
    printf("Insira a variavel b: ");
    scanf("%i",&b);
    printf("Insira a variavel c: ");
    scanf("%i",&c);
    
    int delta = b*b - 4*a*c;
    if (delta < 0){
        printf("A equacao nao tem raizes reais.\n");
    }
    else if (delta > 0){
        x1 = (-b + sqrt(delta)) / 2*a;
        x2 = (-b - sqrt(delta)) /2*a;
        printf("As raizes das equacoes sao %f e %f.\n", x1, x2);
    }


    return 0;
}