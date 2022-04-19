#include <stdio.h>

int main()
{
    double celsius, fah, resultado;
    
    printf("insira a temperatura em fahrenheit:");
    scanf("%lf", &fah);
    
    //resultado= ((fah-32)*5) / 9;
    
    printf("A temperatura convertida para celsius ficaria em: %.3lf\n", ((fah-32)*5) / 9);

    return 0;
}
