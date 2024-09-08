/*Escrever um algoritmo que leia tres valores inteiros distintos e os escreva em ordem
crescente.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

	int valor1, valor2, valor3, aux;

	printf("Insira o primeiro valor.....:\n");
	scanf("%d", &valor1);

	printf("Insira o segundo valor.....:\n");
	scanf("%d", &valor2);

	printf("Insira o terceiro valor.....:\n");
	scanf("%d", &valor3);

	if (valor1 > valor2)
	{
		aux = valor1;
		valor1 = valor2;
		valor2 = aux;
	};

	if (valor2 > valor3)
	{
		aux = valor2;
		valor2 = valor3;
		valor3 = aux;
	};

	if (valor3 > valor2)
	{
		aux = valor3;
		valor3 = valor2;
		valor2 = aux;
	};

	if (valor3 > valor1)
	{
		aux = valor3;
		valor3 = valor1;
		valor1 = aux;
	};

	if (valor2 > valor1)
	{
		aux = valor2;
		valor2 = valor1;
		valor1 = aux;
	};

	if (valor1 > valor3)
	{
		aux = valor1;
		valor1 = valor3;
		valor3 = aux;
	};
	
	printf("A ordem crescente e....: %d e %d e %d", valor1, valor2, valor3);

	return 0;
}