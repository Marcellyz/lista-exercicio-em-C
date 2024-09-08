/*Escreva um programa que calcule o Valor a Pagar pela conta de energia eletrica
para uma determinada Classe Consumidora. Veja as informacoes a seguir:

a. O programa deve receber como dados de entrada: o tipo da Classe Consumidora, (conforme
definido na Tabela 1) e o Consumo em quilowatts/hora (KW h);

b. O calculo do Valor do Fornecimento (V F ), em Reais (R$),e definido pela seguinte formula:
V F = Consumo * Tarifa, onde a tarifa e definida na Tabela 1, conforme a classe consumidora;

c. O Valor a Pagar (V P ) e definido pela seguinte formula: V P = V F + ICM S, onde a taxa de
ICMS  e calculada aplicando uma aliquota de 30% ao valor do fornecimento (ICM S = 0.3 * V F ).*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

	int classe_consumidora;
	float Valor_Fornecido, Valor_Pagar, ICMS, kgwatts;

	printf("Insira qual a sua Classe Consumidora,digite um numero de 1 a 3....:\n");
	printf("1. Classe A\n");
	printf("2. Classe B\n");
	printf("3. Classe C\n");
	scanf("%d", &classe_consumidora);

	printf("Insira o Consumo em quilowatts/hora....:");
	scanf("%f", &kgwatts);

	if (classe_consumidora == 1)
	{
		Valor_Fornecido = kgwatts * 0.5;
		ICMS = 0.3 * Valor_Fornecido;
		Valor_Pagar = Valor_Fornecido + ICMS;
		printf("O valor a pagar da Classe consumidora A e: R$%.2lf", Valor_Pagar);
	}
	else if (classe_consumidora == 2)
	{
		Valor_Fornecido = kgwatts * 0.8;
		ICMS = 0.3 * Valor_Fornecido;
		Valor_Pagar = Valor_Fornecido + ICMS;
		printf("O valor a pagar da Classe consumidora B e: R$%.2lf", Valor_Pagar);
	}
	else if (classe_consumidora == 3)
	{
		Valor_Fornecido = kgwatts * 1;
		ICMS = 0.3 * Valor_Fornecido;
		Valor_Pagar = Valor_Fornecido + ICMS;
		printf("O valor a pagar da Classe consumidora C e: R$%.2lf", Valor_Pagar);
	}

	return 0;
}