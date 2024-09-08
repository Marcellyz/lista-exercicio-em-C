/*
Escreva um algoritmo que calcule e mostre os 10 primeiros termos da s  ́erie de
Fibonacci:

1 1 2 3 5 8 13 21 34 55 89 144 233 377 ...
*/

#include <stdio.h>

int main() {
    int n = 10; 
    int i;
    int primeiro = 1, segundo = 1;

    printf("Os primeiros %d termos da sequencia de Fibonacci sao:\n", n);

    for ( i = 1; i <= n; i++) {
        if (i < 3) {
            printf("%d ", primeiro);
        } else {
            int termo_atual = primeiro + segundo;
            printf("%d ", termo_atual);
            primeiro = segundo;
            segundo = termo_atual;
        }
    }

    printf("\n");

    return 0;
}
