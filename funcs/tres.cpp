#include <bits/stdc++.h>

float soma(int n)
{
    if (n == 0)
    {
        return n;
    }
    else
    {
        return (soma(n - 1) + ((float)(n * n) + 1) / (n + 3));
    }
}

int main(void)
{
    int n;

    scanf("%i", &n);

    printf("A soma eh: %.3f\n", soma(n));

    return 0;
}
