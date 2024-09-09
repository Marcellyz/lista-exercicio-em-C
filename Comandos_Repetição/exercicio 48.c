/*Construa um algoritmo que calcule e apresente o total da compra realizada pelo
cliente em uma loja. Sao fornecidos para o algoritmo, o preco da etiqueta (PE) de cada um dos
produtos comprados e, com a compra encerrada (PE = 0), a condicao de pagamento escolhida
pelo cliente (CP). Utilize para os calculos a tabela de condicoes de pagamento a seguir:

Tabela 1: Condicao de pagamento de cada codigo.

Codigo da condicao de pagamento // Condicao de pagamento

1 // A vista em dinheiro ou cheque, com 10% de desconto
2 // A vista com cartao de credito, com 5% de desconto
3 // Em 2 vezes, preco normal de etiqueta sem juros
4 // Em 3 vezes, preco de etiqueta com acrescimo de 10%

*/
#include <stdio.h>

int main()
{
    double totalCompra = 0.0;
    double precoEtiqueta;
    int condicaoPagamento;

    printf("Digite o preco da etiqueta do produto (ou 0 para encerrar a compra): ");
    scanf("%lf", &precoEtiqueta);

    while (precoEtiqueta != 0)
    {
        printf("Escolha a condicao de pagamento (1 a 4): ");
        scanf("%d", &condicaoPagamento);

        switch (condicaoPagamento)
        {
        case 1:
            totalCompra += precoEtiqueta * 0.9;
            break;
        case 2:
            totalCompra += precoEtiqueta * 0.95; //
            break;
        case 3:
            totalCompra += precoEtiqueta;
            break;
        case 4:
            totalCompra += precoEtiqueta * 1.1;
            break;
        default:
            printf("Condicao de pagamento invalida. Escolha 1 a 4.\n");
            break;
        }

        printf("Digite o preco da etiqueta do proximo produto (ou 0 para encerrar a compra): ");
        scanf("%lf", &precoEtiqueta);
    }

    printf("Total da compra: R$%.2lf\n", totalCompra);

    return 0;
}
