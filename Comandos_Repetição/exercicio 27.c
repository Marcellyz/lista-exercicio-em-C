/*
Fazer um algoritmo que calcule e mostre o quadrado dos numeros inteiros compreendidos entre 15 e 30.
*/

#include <stdio.h>


int main()
{
	int i=15;
	int fim=30;
	int valor=15;
	int resultado;
	
	while((i<=30)&&(valor<=30))
	{
		resultado = i * valor;
		printf("o quadrado dos numeros e %d x %d = %d\n", i, valor, resultado);
		i=i+1;
		valor = valor+1;
	}
	
	return 0;
}