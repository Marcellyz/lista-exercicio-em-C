/*
Faca um algoritmo que recebe o valor do raio de um circulo e apresenta o valor da
area desse circulo.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	double raio, area;
	
	printf("Insira o valor do raio: \n");
	scanf("%lf", &raio);

    area = 3.14 * pow(raio,2); 
    
	printf("A area do circulo foi: %3.lf",area);
	
	return 0;
}