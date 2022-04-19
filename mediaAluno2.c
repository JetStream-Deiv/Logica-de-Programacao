#include <stdio.h>

float nota1, nota2;

int main()
{
    printf("\ninsira as duas notas\n");
    scanf("%f %f", &nota1, &nota2);

    if (nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10)
    {
        float resultado = (nota1 + nota2) / 2;

        if (resultado >= 7)
        {
            printf("\naprovado com media %.2f\n", resultado);
        }
        else if (resultado >= 3 && resultado < 7)
        {
            printf("\nvoce esta de exame com a media de: %.2f\n", resultado);
        }
        else if (resultado >= 0 && resultado < 3)
        {
            printf("\nreprovado com a media de: %.2f\n", resultado);
        }
    }
    else
    {
        printf("\ninsira uma nota valida\n");
    }
    return 0;
}
