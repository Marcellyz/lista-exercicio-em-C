/*
Calcular o valor de S dado pela sequencia:

S = 1 + 3/2 + 5/3 + 7/4 + ... 99/50
*/

#include <stdio.h>

int main()
{
    float s = 0, soma;
    int dividendo, divisor;
    
    dividendo = 3;
    divisor = 2;
    
    while (dividendo <= 99 && divisor <= 50)
    {
        soma = (float)dividendo / divisor;
        s += soma;
        
        dividendo += 2;
        divisor++;
    }
    
    printf("O valor de S é: %.2f\n", s);
    
    return 0;
}
