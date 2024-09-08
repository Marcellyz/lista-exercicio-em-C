/* Escreva um algoritmo que recebe tres valores inteiros e mostre o valor do maior
numero digitado pelo usuario. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

	int valor1, valor2, valor3;

	printf("Insira o primeiro valor.....:");
	scanf("%d", &valor1);

	printf("Insira o segundo valor.....:");
	scanf("%d", &valor2);

	printf("Insira o terceiro valor.....:");
	scanf("%d", &valor3);

	if ((valor1 >= valor2) && (valor1 >= valor3))
	{
		printf("O maior valor foi......:  %d", valor1);
	}

	if ((valor2 >= valor1) && (valor2 >= valor3))
	{
		printf("O maior valor foi......:  %d", valor2);
	}
	if ((valor3 >= valor1) && (valor3 >= valor1))
	{

		printf("O maior valor foi......:  %d", valor3);
	}

	return 0;
}
