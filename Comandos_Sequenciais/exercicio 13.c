/*
O preco de um automovel e calculado pela soma do preco de fabrica, o precos dos
impostos (45% do preco de fabrica) e a porcentagem do revendedor (28% do preco de fabrica).
Fazer um algoritmo que leia o preco de fabrica. Calcule e mostre o preco final do carro.
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
    double precoFabrica, precoRevendedor,precoFinal;
    double  porcentoRevendedor,imposto;
    
    printf("Informe o preco da Fabrica....:\n");
    scanf("%lf",&precoFabrica);

    imposto = 0.45 * precoFabrica;
    porcentoRevendedor = 0.28 * precoFabrica;
    
    precoFinal = imposto + porcentoRevendedor + precoFabrica;
    
    printf("O preco final do automovel e: R$ %.3lf\n", precoFinal);

    return 0;
}
