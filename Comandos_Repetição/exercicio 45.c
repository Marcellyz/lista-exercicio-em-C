/*Construa um algoritmo que apresente a tabuada de um numero N . O valor de N
sera fornecido pelo usuario.*/

#include <stdio.h>

int main(int argc, char** argv)
{
	int valor;
	int i=0;
	int resultado;
	
	printf("==========Tabuada===========\n\n");
	printf("Insira um numero para tabuada...:");
	scanf("%d",&valor);
	
	while(i<=10){
		resultado=valor*i;
		 printf("A tabuada de %d e %d x %d = %d\n",valor, valor, i, resultado);
		 i=i+1;
	}	
	
	
	return 0;
}