/* Faca um algoritmo que recebe um valor inteiro, caso esse numero seja positivo,
mostre o valor digitado, caso seja negativo mostre o valor digitado com o sinal invertido.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

	int valor1;

	printf("Insira um valor...:");
	scanf("%d", &valor1);

	if (valor1 > 0)
	{
		printf("\nO valor informado e positivo....: %d", valor1);
	}
	else
	{
		printf("\nO valor informado e negativo.......: %d", valor1 * -1);
	}

	return 0;
}