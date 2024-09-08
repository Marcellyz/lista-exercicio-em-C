/*
A conversao de graus Fahrenheit para Celsius ́e obtida por c = 5/9 ∗ (f − 32). Faca um algoritmo que calcule e escreva uma tabela de graus Celsius em graus Fahrenheit, cujos graus
variem de 50 a 65 de 1 em 1.
*/

#include <stdio.h>

int main() {
    int celsius;
    float fahrenheit;

    printf("Tabela de Conversao de Celsius para Fahrenheit:\n");
    printf("Celsius\tFahrenheit\n");

    for (celsius = 50; celsius <= 65; celsius++) {
        fahrenheit = (celsius * 9.0/5) + 32;
        printf("%d\t%.2f\n", celsius, fahrenheit);
    }

    return 0;
}
