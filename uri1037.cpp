#include <stdio.h>

int main()
{
    float numero;
    scanf("%f", &numero);

    if (numero < 0 || numero > 100)
    {
        printf("fora do intervalo");
    }

    else
    {
        if (numero >= 0 && numero <= 25)
        {
            printf("\nIntervalo (0,25]");
        }

        else if (numero > 25 && numero <= 50)
        {
            printf("\nIntervalo (25,50]");
        }

        else if (numero > 50 && numero <= 75)
        {
            printf("\nIntervalo (50,75]");
        }

        else
        {
            printf("\nIntervalo (75,100]");
        }

        return 0;
    }
}