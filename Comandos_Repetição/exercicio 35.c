/*
Construa um algoritmo que calcule e mostre o valor de H, sendo H calculado por:

H = 1 + 2 + 3 + 4 + ... + N
*/
#include <stdio.h>

int main()
{
	int i = 1;
	int h = 0, n;

	printf("Informe o numero N...:");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		h = h + i;
	}
	printf("O valor de H %d\n", h);

	return 0;
}