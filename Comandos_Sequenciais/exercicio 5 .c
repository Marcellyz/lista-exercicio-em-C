//Fazer um algoritmo que converta centimetros para polegadas (obs.: 1pol = 2.54cm)s



#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float centimetros, polegadas;
	
	printf("Insira um numero em centimetros:\n");
	scanf("%f",&centimetros);
	
	polegadas = centimetros / 2.54;
	
	 printf("%.2f centimetros equivale a %.2f polegadas\n",centimetros,polegadas);
	 
	return 0;
}