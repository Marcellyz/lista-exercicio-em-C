/*
Faca um algoritmo que leia um valor x, calcule e mostre os 20 primeiros termos
da serie:

S = 1/(x - 1) + 1/(x - 2) + 1/(x - 3) + ...
*/


#include <stdio.h>

int main()
{
	double x, S=1.0, termo;
	double i=1;
	
	printf("Informe o valor de x...:");
	scanf("%lf",&x);
	
	for(i=1;i<=20;i++){
		termo=1.0 /(x-i+1);
		S+=termo;
		printf("Termo %lf: %.5lf\n", i, termo);
	}
	printf("A soma dos primeiros 20 termos da serie S sao: %.5lf\n");

	return 0;
}