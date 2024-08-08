#include <bits/stdc++.h>

int soma(int n)
{
    if (n == 0)
    {
        return n;
    }
    else
    {
        return soma(n - 1) + n;
    }
}

int main(void)
{
    int n;

    scanf("%i", &n);

    printf("A soma eh: %i\n", soma(n));

    return 0;
}
