#include <stdio.h>
#include <ctype.h>

char letra;

int main()
{
    printf("Digite uma letra minuscula\n");
    scanf(" %c", &letra);

    letra = tolower(letra); // letra em minusculo
    if (isalpha(letra))
    { // verifica se a letra pertence ao alfabeto
        switch (letra)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("\nA letra %c e uma vogal\n", letra);
            break;
        default:
            printf("\nA letra %c e uma consoante\n", letra);
        } // fim switch
    }     // if
    else
        printf("\nNao e uma letra\n");
    return 0;
}
