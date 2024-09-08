// Faca um algoritmo que recebe um valor e mostra se o mesmo e par ou impar.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int valor1, resto;

	printf("Insira um valor de 0 a 9....:");
	scanf("%d", &valor1);

	resto = valor1 % 2;

	if (resto == 0)
	{
		printf("\nO numero informado e par");
	}
	else
	{
		printf("\nO numero informado e impar ");
	}

	return 0;
}