#include <stdio.h>

int main(){

    double n1, n2;

    scanf("%lf %lf", &n1, &n2);

    double media = (n1+n2) / 2;

    if(media>=6.0)
    {
        printf("\naprovado!\nsua media corresponde a:%.2lf", media);
    }
    else
    {
        printf("\nreprovado!\nsua media corresponde a:%.2lf", media);
    }
    
    return 0;
    
}
