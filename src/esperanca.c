#include <stdio.h>
#include <math.h>

double esperanc()
{
    double pi = acos(-1.0);
    double areas[5] = {pi/100, (3*pi)/100, pi/20, (7*pi)/100, (9*pi)/100};
    double pontuacao[5] = {100, 50, 30, 15, 5};

    double espMat = 0, multiplicacao;

    for (int i = 0; i < 5; i++)
    {
        multiplicacao = pontuacao[i] * areas[i];
        espMat += multiplicacao;
    }

    return espMat;
}
