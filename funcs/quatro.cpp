#include <bits/stdc++.h>

void rotina(void)
{
    int vetor[4];

    for (int i = 0; i < 5; i++)
    {
        scanf("%i", &vetor[i]);
    }

    int maior = vetor[0];
    int menor = vetor[4];

    for (int i = 0; i < 5; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
}


int main(void)
{
    rotina();

    return 0;
}
