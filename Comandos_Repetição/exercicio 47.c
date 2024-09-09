/*Tendo como entrada a altura (h) e o sexo (1: feminino e 2: masculino) de uma pessoa,
construa um algoritmo que calcule e mostre o seu peso ideal, calculado da seguinte maneira:

homens: 72.7 ∗ h–58
mulheres: 62.1 ∗ h–44.7 

A altura negativa indica o fim da entrada de dados e do algoritmo
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int sexo;
	float altura;

	printf("=====O peso ideal=======\n\n");
	while (1)
	{
		printf("Insira a altura,caso deseje parar, digite uma altura negativo.....:");
		scanf("%f", &altura);

		if (altura < 0)
		{
			break;
		}

		printf("Escolha o sexo\n");
		printf("1.Feminino\n");
		printf("2.Masculino");
		scanf("%d", &sexo);

		switch (sexo)
		{
		case 1:
			sexo = 62.1 * altura - 44.7;
			printf("O peso ideal e... %d\n", sexo);
			break;
		case 2:
			sexo = 72.7 * altura - 58;
			printf("O peso ideal e.... %d\n", sexo);
			break;
		default:

			break;
		}
	}

	return 0;
}