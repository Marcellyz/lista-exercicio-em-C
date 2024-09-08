/* As macas custam R$0.30 cada, se forem compradas menos do que uma duzia, e
R$0.25 se forem compradas pelo menos doze. Escreva um algoritmo que leia o numero de macas
compradas, calcule e mostre o valor total da compra. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

	float macas, precoMacas, precoFinalMacas;

	printf("Insira a quantidade de macas......:");
	scanf("%f", &macas);

	if (macas < 12)
	{
		precoMacas = 0.30;
		precoFinalMacas = macas * precoMacas;
		printf("o valor total da compra e....  R$%.2f", precoFinalMacas);
	}
	else
	{
		precoMacas = 0.25;
		precoFinalMacas = macas * precoMacas;
		printf("o valor total da compra e....  R$%.2f", precoFinalMacas);
	}
	return 0;
}