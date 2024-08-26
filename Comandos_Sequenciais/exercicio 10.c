/*
Faca um algoritmo que mostra a quantidade de cedulas de um caixa eletronico de
um banco. O algoritmo recebe como entrada o valor inteiro a ser sacado pelo cliente, em seguida
apresente a quantidade de cada cedula que o cliente devera receber, de forma que a quantidade
de cedulas seja o menor possivel.
Supondo que o Valor restante contenha (moeda de R$1)

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
    int valor,quantidade;
    
    printf("Digite o valor a ser sacado: ");
    scanf("%d", &valor);

    
    printf("Quantidade de cedulas:\n");

    quantidade = valor / 100;
    
    
    if (quantidade > 0) {
        printf("notas de R$100: %d\n", quantidade);
        valor %= 100;
    }

    
   
    if (quantidade > 0) {
        printf("notas de R$50: %d\n", quantidade);
        valor %= 50;
    }

   
    quantidade = valor / 20;
    if (quantidade > 0) {
        printf("notas de R$20: %d\n", quantidade);
        valor %= 20;
    }

   
    quantidade = valor / 10;
    if (quantidade > 0) {
        printf("notas de R$10: %d\n", quantidade);
        valor %= 10;
    }

   
    quantidade = valor / 5;
    if (quantidade > 0) {
        printf("notas de R$5.00: %d\n", quantidade);
        valor %= 5;
    }

    
    quantidade = valor / 2;
    if (quantidade > 0) {
        printf("notas de R$2.00: %d\n", quantidade);
        valor %= 2;
    }


    //Supondo que o Valor restante contenha (moeda de R$1)
    if (valor > 0) {
        printf("moedas de R$1.00: %d\n", valor);
    }

    return 0;
}
