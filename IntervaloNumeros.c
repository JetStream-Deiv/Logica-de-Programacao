#include <stdio.h>

int main(){

    int numero;

    printf("Insira o valor: ");
    scanf("%d", &numero);

    if (numero>=5 && numero <=100)
    {
        printf("\nO valor %d esta contido no intervalo de 5 e 100.", numero);
    }else{
        printf("\nO valor %d nao esta dentro do intervalo de 5 a 100.", numero);
    }

    return 0;

}
