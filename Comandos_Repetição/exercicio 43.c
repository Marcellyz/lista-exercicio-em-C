/*
Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a massa inicial, em gramas, fazer um programa que determine o tempo necessario
para que essa massa se torne menor do que 0.5 gramas. Escrever a massa inicial, a massa final
e o tempo calculado em segundos.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	float MassaInicial;
	int segundos=0;
	
	printf("Insira a Massa Inicial do material radioativo....:");
	scanf("%f",&MassaInicial);
	
	while(MassaInicial>=0.5)
	{
		MassaInicial=MassaInicial/2;
		segundos+=50;
	}
	printf("O tempo necessario para o decaimento foi...:%d segundos\n\n", segundos);
	printf("A massa final foi...:%lf\n\n", MassaInicial);
	return 0;
}