/*Construa um algoritmo que leia varios numeros inteiros e positivos, calculando ao
final da sequencia a soma e a media desses numeros. A sequencia termina quando o usuario
digitar um valor negativo.*/

#include <stdio.h>

int main() {
    int numero, soma = 0, quantidade = 0;
    double media;

    printf("Digite numeros inteiros e positivos e digite um numero negativo caso queira encerrar):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }

        if (numero >= 0) {
            soma += numero; 
            quantidade++;  
        }
    }

    if (quantidade > 0) {
        media = (double)soma / quantidade;
        printf("Soma dos numeros: %d\n", soma);
        printf("Media dos numeros: %.2lf\n", media);
    } else {
        printf("Nenhum numero valido foi inserido.\n");
    }

    return 0;
}
