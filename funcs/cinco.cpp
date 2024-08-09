#include <bits/stdc++.h>

using namespace std;

void fatorial(int vetor[])
{
    int vetor_fatorial[9];

    for (int i = 0; i < 9; i++)
    {
        vetor_fatorial[i] = 1;
        for (int j = 2; j < vetor[i]; j++)
        {
            vetor_fatorial[i] *= vetor[j]; 
        }
    }

    for (int i = 0; i < 9; i++)
    {
        printf("%d ", vetor_fatorial[i]);
    }
    printf("\n");
}

int main(void)
{
    int vetor[9];

    for(int i = 0; i < 9; i++) 
    {     
        cin >> vetor[i]; 
    }

    fatorial(vetor);

    return 0;
}
