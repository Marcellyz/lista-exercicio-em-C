/*
Ler 10 valores, um de cada vez, e contar quantos deles estao no intervalo [10...50]
e quantos deles estao fora deste intervalo. Mostrar as quantidades calculadas.
*/

#include <stdio.h>

int main()
{
    int valor, i;
    int dentroIntervalo = 0;
    int foraIntervalo = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valor);

        if (valor >= 10 && valor <= 50)
        {
            dentroIntervalo++;
        }
        else
        {
            foraIntervalo++;
        }
    }

    printf("Quantidade de valores no intervalo [10, 50]: %d\n", dentroIntervalo);
    printf("Quantidade de valores fora do intervalo [10, 50]: %d\n", foraIntervalo);

    return 0;
}
