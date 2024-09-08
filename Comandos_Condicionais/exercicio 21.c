/*Escrever um algoritmo que leia tres valores inteiros e verifique se eles podem ser os
lados de um triangulo. Se forem, informar qual o tipo de triangulo que eles formam: equilatero,
isoscele ou escaleno.

Propriedade: o comprimento de cada lado de um triangulo  e menor do que a soma dos
comprimentos dos outros dois lados.

Triangulo Equilatero: aquele que tem os comprimentos dos tres lados iguais;

Triangulo Isosceles: aquele que tem os comprimentos de dois lados iguais. Portanto, todo
triangulo equilatero  e tambem isosceles;

Triangulo Escaleno: aquele que tem os comprimentos de seus tres lados diferentes*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

	int valor1, valor2, valor3;

	printf("Insira o primeiro valor....:\n");
	scanf("%d", &valor1);

	printf("Insira o segundo valor....:\n");
	scanf("%d", &valor2);

	printf("Insira o terceiro valor....:\n");
	scanf("%d", &valor3);

	if (valor1 == valor2 && valor1 == valor3)
	{
		printf("os tres valores formaram um triangulo equilatero");
	}
	else
	{
		if (valor1 == valor2 || valor1 == valor3 || valor2 == valor3)
		{
			printf("os tres valores formaram um triangulo isosceles");
		}
		else
		{
			printf("os tres valores formaram um triangulo escaleno");
		}
	}

	return 0;
}