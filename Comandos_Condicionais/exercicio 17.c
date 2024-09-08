/*Faca um algoritmo que leia dois numeros e identifique se sao iguais ou diferentes.
Caso eles sejam iguais, mostre uma mensagem dizendo que eles sao iguais. Caso sejam diferentes,
informe qual numero e o maior, e uma mensagem que sao diferentes.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

	int valor1, valor2, numMaior;

	printf("Insira o primeiro valor....:");
	scanf("%d", &valor1);

	printf("Insira o segundo valor....:");
	scanf("%d", &valor2);

	if (valor1 != valor2)
	{

		if (valor1 > valor2)
		{
			numMaior = valor1;
		}
		else
		{
			numMaior = valor2;
		}
		printf("Os valores informados %d e %d sao diferentes \n", valor1, valor2);
		printf("O maior numero entre eles foi....: %d", numMaior);
	}
	else
	{
		printf("Os valores informados %d e %d sao iguais", valor1, valor2);
	}

	return 0;
}