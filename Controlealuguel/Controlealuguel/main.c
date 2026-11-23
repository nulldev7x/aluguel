#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;

    do {
        printf("\n==== CADASTRO DE IMOVEIS ====\n");
        printf("1 - Cadastrar imovel\n");
        printf("2 - Listar imoveis\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            printf("Cadastrar imovel\n");
            break;

        case 2:
            printf("Listar imoveis\n");
            break;

        case 0:
            printf("Saindo...\n");
            break;

        default:
            printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}
