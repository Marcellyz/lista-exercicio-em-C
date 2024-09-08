/*
Escreva um algoritmo que leia a idade de 10 pessoas, calcule e mostre a quantidade
de pessoas maiores de idade.
*/
#include <stdio.h>

int main()
{

	int i = 0;
	int valor;
	int resultado;

	while (i <= 9)
	{
		printf("Insira uma idade...:");
		scanf("%d", &valor);
		i = i + 1;

		if (valor >= 18)
		{
			printf("Voce digitou uma idade maior ou igual a 18\n");
		}
		else
		{
			printf("Voce digitou nao uma idade maior ou igual a 18\n");
		}
	}

	return 0;
}