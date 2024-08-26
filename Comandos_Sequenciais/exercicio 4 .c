/*
	fazer um algoritmo que calcule e mostre:

 	a) A soma entre dois numeros
	b) O produto entre eles e
	c) O quociente entre eles
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

	int n1, n2;
	float soma, multiplicacao, quociente;

	printf("insira um numero de  0 a 9:\n");
	scanf("%d", &n1);

	printf("insira um numero de  0 a 9:\n");
	scanf("%d", &n2);

	soma = n1 + n2;
	multiplicacao = n1 * n2;
	quociente = n1 / n2;

	if (n2 != 0)
	{
		printf("A soma de %d e %d e: %.2f\n", n1, n2, soma);
		printf("A multiplicacao de %d e %d e: %.2f\n", n1, n2, multiplicacao);
		printf("O quociente entre %d e %d e: %.2f\n", n1, n2, quociente);
	}
	else
	{
		printf("Nao é possivel realizar conta matematica, pois o segundo numero\n e igual a 0");
	}
	return 0;
}