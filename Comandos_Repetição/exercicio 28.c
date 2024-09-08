/*
Fazer um algoritmo que calcule e mostre a soma dos cem primeiros numeros
inteiros.
*/
#include <stdio.h>

int main()
{
	int soma = 0;
	int i;

	for (i = 0; i <= 100; i++)
	{
		soma = i + soma;
		printf("a soma e %d = %d\n", i, soma);
	}

	return 0;
}