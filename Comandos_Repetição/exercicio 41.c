/*
Escreva um programa que calcule as n primeiras potˆencias do n  ́umero k. Para n =
3 e k = 2 teremos:

• 2 elevado a 1 = 2
• 2 elevado a 2 = 4
• 2 elevado a 3 = 8
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

	double n = 3.0, k = 2.0, resultado;
	int i;

	for (i = 1; i <= 1; i++)
	{
		resultado = pow(3.0, i);
		printf("%.2lf elevado a %2.lf e igual a %.2lf\n", n, k - 1, resultado);
	}

	for (i = 1; i <= 1; i++)
	{
		resultado = pow(3.0, k);
		printf("%.2lf elevado a %2.lf e igual a %.2lf\n", n, k, resultado);
	}
	for (i = 1; i <= 1; i++)
	{
		resultado = pow(3.0, n);
		printf("%.2lf elevado a %2.lf e igual a %.2lf\n", n, k + 1, resultado);
	}

	return 0;
}