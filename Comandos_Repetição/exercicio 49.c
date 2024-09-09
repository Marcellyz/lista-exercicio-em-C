/*
A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando
dados sobre o salario e o numero de filhos. A prefeitura deseja saber:

a) A media do salario da populacao;
b) A media do numero de filhos;
c) O maior salario;
d) A porcentagem de pessoas com salarios ate R$1000,00.

*/

#include <stdio.h>

int main()
{
    int numeroDeHabitantes;
    double salario, mediaSalario = 0, mediaNumeroFilhos = 0, maiorSalario = 0;
    int numeroFilhos, pessoasComSalarioAte1000 = 0;
    int i;

    printf("Digite o numero de habitantes: ");
    scanf("%d", &numeroDeHabitantes);

    for (i = 1; i <= numeroDeHabitantes; i++)
    {
        printf("Digite o salario do habitante %d: ", i);
        scanf("%lf", &salario);

        printf("Digite o numero de filhos do habitante %d: ", i);
        scanf("%d", &numeroFilhos);

        mediaSalario += salario;

        mediaNumeroFilhos += numeroFilhos;

        if (salario > maiorSalario)
        {
            maiorSalario = salario;
        }

        switch (salario <= 1000)
        {
        case 1:
            pessoasComSalarioAte1000++;
            break;
        case 0:
            break;
        }
    }

    mediaSalario /= numeroDeHabitantes;
    mediaNumeroFilhos /= numeroDeHabitantes;

    double porcentagemAte1000 = (double)pessoasComSalarioAte1000 / numeroDeHabitantes * 100;

    printf("a) Media do salario da populacao: %.2lf\n", mediaSalario);
    printf("b) Media do numero de filhos: %.2lf\n", mediaNumeroFilhos);
    printf("c) Maior salario: %.2lf\n", maiorSalario);
    printf("d) Porcentagem de pessoas com salarios ate R$1000,00: %.2lf%%\n", porcentagemAte1000);

    return 0;
}
