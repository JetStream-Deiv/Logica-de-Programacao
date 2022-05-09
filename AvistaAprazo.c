#include <stdio.h>
#include <ctype.h>

int main()
{
    int opcao;
    float valor, resultado, resultado2;

    printf("Qual e o valor total?\n");
    scanf("%f", &valor);

    printf("Qual a forma de pagamento?\n1 - a vista\n2 - a prazo\n");
    scanf(" %d", &opcao);

    switch (opcao)
    {
    case 1:
        resultado = valor * 0.10;
        resultado2 = valor - resultado;

        printf("o valor com 10 porcento de desconto e de: %2.f", resultado2);

        break;

    default:
        printf("o valor da compra e de: %2.f", valor);
        break;
    }
}