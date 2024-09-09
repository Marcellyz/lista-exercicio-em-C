/*Uma determinada empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou nao de um novo produto lancado no mercado. Para isso forneceu o sexo do
entrevistado (M - masculino, F - feminino) e a sua resposta (S - sim, N - nao). Sabendo-se que
foram entrevistadas 20 pessoas, fazer um programa que calcule e escreva:

a) o numero de pessoas que responderam sim,
b) o numero de pessoas que responderam nao,
c) a porcentagem de pessoas do sexo feminino que responderam sim,
d) a porcentagem de pessoas do sexo masculino que responderam nao.
*/
#include <stdio.h>

int main()
{
    int i, numeroDeEntrevistados = 20;
    char sexo, resposta;
    int pessoasSim = 0, pessoasNao = 0, mulheresSim = 0, homensNao = 0;

    for (i = 1; i <= numeroDeEntrevistados; i++)
    {
        printf("Digite o sexo do entrevistado %d (M/F): ", i);
        scanf(" %c", &sexo);

        printf("Digite a resposta do entrevistado %d (S/N): ", i);
        scanf(" %c", &resposta);

        if (resposta == 'S' || resposta == 's')
        {
            pessoasSim++;

            if (sexo == 'F' || sexo == 'f')
            {
                mulheresSim++;
            }
        }
        else if (resposta == 'N' || resposta == 'n')
        {
            pessoasNao++;

            if (sexo == 'M' || sexo == 'm')
            {
                homensNao++;
            }
        }
    }

    double porcentagemMulheresSim = (double)(mulheresSim) / (pessoasSim) * 100;
    double porcentagemHomensNao = (double)(homensNao) / (pessoasNao) * 100;

    printf("a) Numero de pessoas que responderam sim: %d\n", pessoasSim);
    printf("b) Numero de pessoas que responderam nao: %d\n", pessoasNao);
    printf("c) Porcentagem de mulheres que responderam sim: %.2lf%%\n", porcentagemMulheresSim);
    printf("d) Porcentagem de homens que responderam nao: %.2lf%%\n", porcentagemHomensNao);

    return 0;
}
