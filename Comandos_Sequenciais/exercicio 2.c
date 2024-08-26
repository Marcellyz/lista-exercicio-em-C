//Fazer um algoritmo que leia um numero e mostre o seu antecessor e o seu sucessor.


#include <stdio.h>

int main(){
	
	int numero, antecessor,sucessor;
	
	numero=0;
	antecessor=0;
	sucessor=0;
	
	printf("Insira um numero:\n");
	scanf("%d",&numero);
	
	 antecessor=numero - 1;
	 sucessor=numero + 1;
	 
	 printf("O antecessor e:(%d)\n",antecessor);
	 printf("O sucessor e:(%d)",sucessor);
	 
     return 0;
}