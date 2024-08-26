//Fazer um algoritmo que obtenha dois numeros inteiros, x e y, mostre o quociente e
//o resto da divisao inteira entre eles.


#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x, y, quociente, resto;
	
	printf("Insira o primeiro numero:\n");
	scanf("%d",&x);
	
	printf("Insira o segundo numero:\n");
	scanf("%d",&y);
	
	quociente = x / y;
	
	printf("\nResultado da divisao inteira de %d / %d = %d \n",x,y,quociente);
	
    resto = x % y;
	
    	printf("\nResto da divisao e = %d", resto);
	return 0;
}