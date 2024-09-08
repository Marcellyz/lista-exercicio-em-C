/*
Calcular e mostrar a media aritmetica dos numeros pares compreendidos entre 13
e 73.
*/

#include <stdio.h>

int main()
{
	int soma = 0;
	int cont = 0;
	int i;
	float media;

	for (i = 14; i <= 72; i += 2)
	{
		soma += i;
		cont++;
	}
	for (media = 0; media <= 7; media++)
	{
		media = soma / cont;
		printf("A media dos numeros pares entre 13 e 73 e....: %.2lf", media);
	}
	return 0;
}