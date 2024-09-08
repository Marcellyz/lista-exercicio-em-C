/*
Construa um algoritmo que leia um conjunto de 20 numeros inteiros e mostre qual
foi o maior valor fornecido.
*/

#include <stdio.h>

int main()
{
	int numero;
	int maior;
	int i;

	printf("Digite o primeiro numero....:");
	scanf("%d", &maior);

	for (i = 0; i <= 18; i++)
	{
		printf("Digite o proximo numero.....");
		scanf("%d", &numero);

		if (numero > maior)
		{
			maior = numero;
		}
	}
	printf("O maior valor fornecido foi: %d\n", maior);
	return 0;
}