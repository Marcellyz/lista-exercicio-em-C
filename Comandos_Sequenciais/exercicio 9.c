/*
Ler dois valores para as variaveis A e B, e efetuar as trocas dos valores de forma
que a variavel A passe a possuir o valor da variavel B e a variavel B passe a possuir o valor da
variavel A. Apresentar os valores trocados.

*/


#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int A,B, aux;
	
	printf("Insira o valor de  A:\n");
	scanf("%d",&A);
	
	printf("Insira o valor de B:\n");
	scanf("%d",&B);
	
	aux = A;
	A = B;
	B = aux;

	printf("O valor de A: %d\n", A);
    printf("O valor de B: %d", B);
	
	return 0;
}