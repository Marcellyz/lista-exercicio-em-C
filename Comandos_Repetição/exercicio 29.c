/*
Fazer um algoritmo que leia 5 numeros e verifique se ele esta entre 100 e 200.
Se estiver na faixa, mostrar 'Voce digitou um numero entre 100 e 200', se nao estiver na faixa,
mostrar 'Voce digitou um numero fora da faixa entre 100 e 200'.
*/

#include <stdio.h>

int main()
{

	int i = 0;
	int valor;
	int resultado;

	while (i <= 4)
	{
		printf("Insira um numero....:");
		scanf("%d", &valor);
		i = i + 1;

		if ((valor >= 100) && (valor <= 200))
		{
			printf("Voce digitou entre 100 e 200!!\n");
		}
		else
		{
			printf("Voce nao digitou entre 100 e 200!!\n");
		}
	}
	return 0;
}