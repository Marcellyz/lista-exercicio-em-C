/*
Fazer um algoritmo que calcule e mostre a area e o volume de um cilindro.
(A = 2 pi r(h + r), V = pi r 2h).

*/





#include <stdio.h>
#include <math.h>



int main(){

      float Area, Volume, raio, altura;


    printf("\nInsira o raio da base: ");
    scanf("%f", &raio);

    printf("\nInsira a altura do cilindro.: ");
    scanf("%f", &altura);

    
    Area = (2 * 3.14 * raio * raio * altura);

    Volume = (3.14 * raio * raio * altura);


    printf("\nA area total do cilindro       = %f", Area);
    printf("\nO volume ocupado pelo cilindro = %f\n\n", Volume);


    return(0);
}