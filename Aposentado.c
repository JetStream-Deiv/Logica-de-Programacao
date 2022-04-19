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
    
//Uma empresa quer verificar se o empregado está qualificado para a aposentadoria ou não. Para estar em condições, um dos seguintes requisitos deve ser satisfeito:
//-Ter no mínimo 65 anos de idade;
//-Ter trabalhado no mínimo 30 anos.
//-Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos.
//Com base nas informações acimas, construa um programa que leia: a idade e o tempo de trabalho do funcionário. 
//O programa deverá imprimir a idade, o tempo de trabalho e a mensagem “Requer aposentadoria” ou “Não requer aposentadoria”.
    
}
