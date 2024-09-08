/*Escreva um algoritmo para ler 2 valores inteiros e uma das seguintes operacoes a
serem executadas: 1. Adicao, 2. Subtracao, 3. Divisao e 4. Multiplicacao. Calcular e mostrar o
resultado da operacao*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

	int valor1, valor2, resultado;
	int operacao;

	printf("Insira o primeiro valor......:\n");
	scanf("%d", &valor1);

	printf("Insira o segundo valor......:\n");
	scanf("%d", &valor2);

	printf("Escolha uma operacao de 1 a 4.....:\n");
	printf("1.Adicao\n");
	printf("2.Subtracao\n");
	printf("3.Multiplicacao\n");
	printf("4.Divisao\n");
	scanf("%d", &operacao);

	if (operacao == 1)
	{
		resultado = valor1 + valor2;
		printf("o Resultado da Adicao foi %d\n", resultado);
	}
	if (operacao == 2)
	{
		resultado = valor1 - valor2;
		printf("o Resultado da subtracao foi %d\n", resultado);
	}
	if (operacao == 3)
	{
		resultado = valor1 * valor2;
		printf("o Resultado da Multiplicacao foi %d\n", resultado);
	}

	else if (operacao == 4)
	{
		if (valor2 != 0)
		{
			resultado = valor1 / valor2;
			printf("o Resultado da divisao foi %d\n", resultado);
		}
	}
	return 0;
}