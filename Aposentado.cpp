#include <stdio.h>

int main(){
    int idade, tempo;
    
    printf("\nInsira a sua idade\n");
    scanf("%d", &idade);

    printf("\ninsira o tempo de trabalho em anos\n");
    scanf("%d", &tempo);

    if((idade >= 65) || (tempo >= 30) || ((idade >= 60) && tempo >= 25))
    {
        printf("\nSua idade corresponde a: %d\nseu tempo de trabalho a: %d\nLogo, requer aposentadoria\n", idade, tempo);
    }else
    {
         printf("\nSua idade corresponde a: %d\nseu tempo de trabalho a: %d\nLogo, NAO requer aposentadoria\n", idade, tempo);
    }

    return 0;

}