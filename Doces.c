#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];   // Armazena o nome do cliente
    int tipoDoce;    // Armazena o tipo de doce escolhido pelo usu?rio
    float quantidade, preco1, preco2, precoKg, total; // Variaveis para calculos
    char doce[50];   // Armazena o nome do doce escolhido

    // Solicita o nome do cliente
    printf("Digite o nome do cliente: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;

    // Solicita o tipo de doce
    printf("Digite o tipo de doce (1 a 4): ");
    scanf("%d", &tipoDoce);

    // Solicita a quantidade desejada
    printf("Digite a quantidade de doce (em Kg): ");
    scanf("%f", &quantidade);

    // Estrutura switch para definir o doce e seus pre?os conforme a escolha do usu?rio
    switch(tipoDoce) {
        case 1:
            strcpy(doce, "Trufa nozes com chocolate");
            preco1 = 35.00;
            preco2 = 32.00;
            break;
        case 2:
            strcpy(doce, "Torta mousse de limao");
            preco1 = 34.45;
            preco2 = 32.25;
            break;
        case 3:
            strcpy(doce, "Bolo de brigadeiro");
            preco1 = 45.00;
            preco2 = 40.00;
            break;
        case 4:
            strcpy(doce, "Bolo Cookie de Nutella");
            preco1 = 48.50;
            preco2 = 46.20;
            break;
        default:
            printf("Nao temos este tipo de doce.\n");
            return 1; // Encerra o programa com erro caso o tipo de doce seja inv?lido
    }

    // Determina o pre?o por Kg baseado na quantidade comprada
    precoKg = (quantidade <= 5) ? preco1 : preco2;

    // Calcula o total a pagar
    total = precoKg * quantidade;

    // Resumo da compra
    printf("\nResumo da Compra:\n");
    printf("Nome do cliente: %s\n", nome);
    printf("Tipo de doce: %d\n", tipoDoce);
    printf("Doce comprado: %s\n", doce);
    printf("Quantidade (Kg): %.2f\n", quantidade);
    printf("Valor por Kg: R$ %.2f\n", precoKg);
    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}
