/*
Escreva um algoritmo que recebe o valor do salario fixo e o total de vendas efetuadaspor um
vendedor de uma loja durante o mes (em dinheiro). Sabendo que este vendedor ganha 15% de 
comissao sobre suas vendas efetuadas, informar o salario fixo e salario no final do mes.

*/

#include <stdio.h>
#include <math.h>

int main()
{

    double salarioFixo, totalVendas, salarioFinal, comissao;

    printf("Digite o salario fixo do vendedor:\n ");
    scanf("%lf", &salarioFixo);

    printf("Digite o total de vendas efetuadas pelo vendedor: ");
    scanf("%lf", &totalVendas);

    comissao = 0.15 * totalVendas;
    salarioFinal = salarioFixo + comissao;

    printf("Salario Fixo: R$%.2lf\n", salarioFixo);
    printf("Comissao: %.2lf\n", comissao);
    printf("Salario Final: R$%.2lf\n", salarioFinal);

    return 0;
}