// Fazer um algoritmo que calcule e mostre a tabuada do 7.

#include <stdio.h>

int main()
{
	int i = 0;
	int valor = 7;
	int resultado;

	printf("Tabuada\n\n");

	while (i <= 10)
	{
		resultado = valor * i;
		printf("A tabuada de 7 e %d x %d = %d\n", valor, i, resultado);
		i = i + 1;
	}

	return 0;
}