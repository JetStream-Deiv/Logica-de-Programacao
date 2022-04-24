#include <stdio.h>

float a, b, c;

int main()
{

    printf("\nInsira os lados do triangulo\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && b + c > a && a + c > b) // para saber se é um triângulo
    {

        float trianguloEquilatero = a == b && b == c;
        float trianguloIsosceles = a == b || c == a || b == c;

        if (trianguloEquilatero)
        {
            printf("\n Os tres lados sao iguais, portanto, e um triangulo equilatero\n");
        }
        else if (trianguloIsosceles)
        {
            printf("\n o triangulo e isosceles, por ter dois lados iguais\n");
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
}
