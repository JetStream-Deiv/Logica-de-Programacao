#include <stdio.h>

int main()
{
    int v1;

    scanf("%d", &v1);
    
    int resultado = v1 % 2;
    
    if (resultado==0)
    {
        printf("Valor inserido corresponde a par");
    }else
    {
        printf("Valor inserido corresponde a impar");
    }    

    return 0;
}
