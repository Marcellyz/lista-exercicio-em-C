/*
Escreva um algoritmo que leia os valores das vari  ́aveis X e A e calcule o valor de
S dado por:

S= 1/A * 20/X + 2/(A- 1) * 19/X^2 + 3/(A - 2) * 18/X^3 + ... + 20/(A-19) * 1/X^20
*/

#include <stdio.h>
#include <math.h>

int main() {
    double X, A, S = 0.0;
    int i;
   
    
    printf("Insira o valor de X: ");
    scanf("%lf", &X);
    
    printf("Insira o valor de A: ");
    scanf("%lf", &A);


    for ( i = 1; i <= 20; i++) {
        double termo = i / A * (pow(X, i)); 
        S=S+termo;
    }

    printf("O valor de S e: %.5lf\n", S);

    return 0;
}
