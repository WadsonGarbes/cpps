#include <bits/stdc++.h>

void calcular_salario(float vendas, float salario_fixo)
{
    printf("%.2f\n", 0.15 * (vendas) + salario_fixo);
}

int main(void)
{
    float vendas, salario_fixo;

    scanf("%f", &vendas);
    scanf("%f", &salario_fixo);

    calcular_salario(vendas, salario_fixo);

    return 0;
}
