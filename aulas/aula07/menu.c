#include <stdio.h>

int main() {

    int opcao = 0;

    while (opcao != 5) {

        system("clear");

        printf("MENU PRINCIPAL\n");
        printf("1 - CONSULTAR SALDO\n");
        printf("2 - FAZER RECARGA\n");
        printf("3 - VER RECADOS\n");
        printf("4 - ULTIMAS LIGACOES\n");
        printf("5 - SAIR\n");
        printf("Entre com uma opcao => ");
        scanf("%i", &opcao);
        while (getchar () != '\n');

        
        switch (opcao) {
            case 1: {
                system("clear");
                printf("CONSULTA SALDO\n\n");
                printf("Seu saldo eh de R$ 10.00.\n"); break;
            }
        
            case 2: printf("Escolha um valor de recarga: \n"); break;
            case 3: printf("Voce nao tem recados. \n"); break;
            case 4: printf("9999-0000\n9999-1111\n9999-2222\n"); break;
            case 5: printf("Ate logo\n"); break;
            default: printf("Opcao invalida. Tente de novo!\n"); opcao = 0;
        }

        if (opcao != 5){
            printf("Pressione ENTER para continuar...");
            getchar();
        }
    }

    return 0;
}