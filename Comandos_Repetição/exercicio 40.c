/*
Escreva um algoritmo que leia os valores de K e N . Calcule e mostre o valor de
K^N .
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int i;
	double K, N;
	double resultado;

	printf("Insira o valor de K....:");
	scanf("%lf", &K);

	printf("Insira o valor de N....:");
	scanf("%lf", &N);

	for (i = 0; i <= N; i++)
	{
		resultado = pow(K, N);
	}
	printf("%.2lf elevado a %2.lf e igual a %.2lf\n", K, N, resultado);
	return 0;
}