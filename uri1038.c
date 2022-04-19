#include <stdio.h>

int main()
{
    int codigoProd, quantia;
    scanf("%d %d", &codigoProd, &quantia);

    if (codigoProd >= 1 && codigoProd <= 5)
    {
        if (codigoProd == 1)
        {
            double resultado = 4.00 * quantia;
            printf("Total: R$%.2lf", resultado);
        }
        else if (codigoProd == 2)
        {
            double resultado = 4.50 * quantia;
            printf("Total: R$%.2lf", resultado);
        }
        else if (codigoProd == 3)
        {
            double resultado = 5.00 * quantia;
            printf("Total: R$%.2lf", resultado);
        }
        else if (codigoProd == 4)
        {
            double resultado = 2.00 * quantia;
            printf("Total: R$%.2lf", resultado);
        }
        else if (codigoProd == 5)
        {
            double resultado = 1.50 * quantia;
            printf("Total: R$%.2lf", resultado);
        }
    }
    return 0;
}
