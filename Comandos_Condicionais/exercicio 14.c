// Faca um algoritmo que recebe um valor inteiro e mostra se o valor e zero, positivo
// ou negativo.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int valor;

	printf("Insira um valor....:");
	scanf("%d", &valor);

	if (valor > 0)
	{
		printf("\nO numero informado e positivo");
	}
	if (valor < 0)
	{
		printf("\nO numero informado e negativo");
	}
	if (valor == 0)
	{
		printf("\nO valor informado e zero");
	}

	return 0;
}