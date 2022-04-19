#include <stdio.h>

float a, b, c;

int main()
{

    printf("\nInsira os lados do triangulo\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && b + c > a && a + c > b) // para saber se é um triângulo
    {

        if (a == b && b == c)
        {
            printf("\n Os tres lados sao iguais, portanto, e um triangulo equilatero\n");
        }
        else if (a == b || c == a || b == c)
        {
            printf("\n o triangulo e isosceles\n");
        }
        else
        {
            printf("\no triangulo e escaleno\n");
        }
    }
    else
    {
        printf("\nnao e um triangulo\n");
    }
    return 0;
}
