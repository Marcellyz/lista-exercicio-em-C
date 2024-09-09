/*
Tem-se um conjunto de dados contendo a altura e o sexo (M ou F) de 15 pessoas.
Faca um programa que calcule e mostre:

a) a maior e a menor altura do grupo;
b) a media de altura das mulheres;
c) o numero de homens.
*/

#include <stdio.h>

int main() {
    int i, numeroDePessoas = 15, numeroDeHomens = 0;
    double altura, maiorAltura = 0, menorAltura = 1000, somaAlturaMulheres = 0;
    char sexo;

    for (i = 1; i <= numeroDePessoas; i++) {
        printf("Digite a altura da pessoa %d em metros: ", i);
        scanf("%lf", &altura);

        printf("Digite o sexo da pessoa %d (M/F): ", i);
        scanf(" %c", &sexo);

       
        if (altura > maiorAltura) {
            maiorAltura = altura;
        }
        if (altura < menorAltura) {
            menorAltura = altura;
        }

        
        if (sexo == 'F' || sexo == 'f') {
            somaAlturaMulheres += altura;
        }

        
        if (sexo == 'M' || sexo == 'm') {
            numeroDeHomens++;
        }
    }

    
    double mediaAlturaMulheres = somaAlturaMulheres / (numeroDePessoas - numeroDeHomens);

    printf("a) Maior altura do grupo: %.2lf metros\n", maiorAltura);
    printf("a) Menor altura do grupo: %.2lf metros\n", menorAltura);
    printf("b) Media de altura das mulheres: %.2lf metros\n", mediaAlturaMulheres);
    printf("c) Numero de homens: %d\n", numeroDeHomens);

    return 0;
}
	