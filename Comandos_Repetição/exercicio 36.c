/*
Calcular o valor de S dado pela sequencia:
S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/10
*/

#include <stdio.h>

int main()
{
	double S = 0.0;
	int i;

	for (i = 1; i <= 10; i++)
	{
		S += 1.0 / i;
	}

	printf("O valor de S e:%lf\n", S);

	return 0;
}