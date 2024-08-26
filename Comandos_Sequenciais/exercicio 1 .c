//Faca um algoritmo que recebe dois valores inteiros e mostra o resultado da multiplicacao

#include <stdio.h>
#include <locale.h>

int main(){
	
	int n1,n2,multiplicacao;
	
	printf("insira o valor: ");
	scanf("%d", &n1);
	
	printf("Insira o segundo valor: ");
	scanf("%d", &n2);
	
	 multiplicacao = n1 * n2;
	
	printf("o valor informado e: , %d * %d = %d\n", n1, n2, multiplicacao);
	
	return 0;
}