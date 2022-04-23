#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X, Y, menor, maior, soma;
    scanf("%d", &X);
    scanf("%d", &Y);
    soma = 0;

    if (X > Y)
    {
        maior = X;
        menor = Y;
    }
    else
    {
        maior = Y;
        menor = X;
    }
    for (int i = menor; i <= maior; i++)
    {
        if (i % 13 != 0)
        {
            soma = soma + i;
        }
    }
    printf("%d", soma);
}
