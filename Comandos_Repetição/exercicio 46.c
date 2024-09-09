/*Faca um algoritmo para calcular n! (fatorial de um numero n), sendo que o valor
de n e fornecido pelo usuario. Sabe-se que:

n! = 1 ∗ 2 ∗ 3 ∗ ... ∗ (n − 1) ∗ n
0! = 1, por definicao.*/
#include <stdio.h>

int main()
{

	int n, i;
	double fat = 1;

	printf("Insira um valor para calcular o fatorial....:");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		fat *= n;
	}

	printf("%d! = %.2lf\n", n, fat);
	return 0;
}