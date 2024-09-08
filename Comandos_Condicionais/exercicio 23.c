/* Escreva um algoritmo para calcular as ra �izes de uma equac �  ~ao do 2� grau pela
formula , e o discriminante da equacao.
Para o discriminante ha tres possiveis situacoes:
a) Se D < 0, nao ha solucao real, pois nao existe raiz quadrada de numero negativo.
b) Se D = 0, ha duas solucoes iguais: x1 = x2 = -b
2a .
c) Se D > 0, ha duas solucoes reais e diferentes: x1 e x2 . */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	
	double a, b ,c, discriminante;
	double x1,x2;
	
	printf("Insira o valor de A.....:\n");
	scanf("%lf",&a);
	
	printf("Insira o valor de B.....:\n");
	scanf("%lf",&b);
	
	printf("Insira o valor de C.....:\n");
	scanf("%lf",&c);
	
    discriminante = b * b - 4 * a *c;
    
    if(discriminante < 0){
    	printf("Nao existe uma solucao real, porque o numero indicado e negativo");	
	}
	else if(discriminante == 0){
		x1 = -b / (2 * a);
		printf("Existe duas solucoes iguais: x1 = x2 = %.2lf\n",x1);
	}
	else
	{
		x1 = -b + sqrt(discriminante) / (2 * a);
		x2 = -b - sqrt(discriminante) / (2 * a);
		printf("Existe duas solucoes diferentes: x1 = %.2lf e x2 = %.2lf\n",x1,x2);
	}
	return 0;
}