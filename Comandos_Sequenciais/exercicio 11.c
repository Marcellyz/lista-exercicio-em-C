/*
Faca um algoritmo que auxiliaria um funcionario de um caixa de supermercado. O
algoritmo devera receber como entrada o valor da compra do cliente e o valor pago pelo cliente,
em seguida o algoritmo devera apresentar o troco da compra, de forma que o mesmo deve
apresentar a quantidade de cedulas e moedas para compor o troco do cliente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){	
    double valorCompra, valorPago, troco;
    int cem, cinquenta, vinte, dez, cinco, dois;
    int umReal, cinquentaCentavos, vinteCincoCentavos, dezCentavos, cincoCentavos;

    
    printf("Digite o valor da compra: R$ ");
    scanf("%lf", &valorCompra);

    printf("Digite o valor pago pelo cliente: R$ ");
    scanf("%lf", &valorPago);

	
    troco = valorPago - valorCompra;

	//Calcula quantas notas de R$100 são necessárias para o troco
    cem = troco / 100;

    //Atualiza o valor do troco subtraindo o valor correspondente às notas de R$100.
    troco -= cem * 100;

    cinquenta = troco / 50;
    troco -= cinquenta * 50;

    vinte = troco / 20;
    troco -= vinte * 20;

    dez = troco / 10;
    troco -= dez * 10;

    cinco = troco / 5;
    troco -= cinco * 5;

    dois = troco / 2;
    troco -= dois * 2;

    umReal = troco / 1;
    troco -= umReal * 1;

    cinquentaCentavos = troco / 0.5;
    troco -= cinquentaCentavos * 0.5;

    vinteCincoCentavos = troco / 0.25;
    troco -= vinteCincoCentavos * 0.25;

    dezCentavos = troco / 0.1;
    troco -= dezCentavos * 0.1;

    cincoCentavos = troco / 0.05;
    troco -= cincoCentavos * 0.05;
    
    
    
    printf("\nTroco a ser entregue:\n");
    printf("Cedulas de R$100: %d\n", cem);
    printf("Cedulas de R$50: %d\n", cinquenta);
    printf("Cedulas de R$20: %d\n", vinte);
    printf("Cedulas de R$10: %d\n", dez);
    printf("Cedulas de R$5: %d\n", cinco);
    printf("Cedulas de R$2: %d\n", dois);
    printf("Moedas de R$1: %d\n", umReal);
    printf("Moedas de R$0.50: %d\n", cinquentaCentavos);
    printf("Moedas de R$0.25: %d\n", vinteCincoCentavos);
    printf("Moedas de R$0.10: %d\n", dezCentavos);
    printf("Moedas de R$0.05: %d\n", cincoCentavos);

    return 0;
}