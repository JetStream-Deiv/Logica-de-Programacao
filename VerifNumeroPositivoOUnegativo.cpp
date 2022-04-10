#include <stdio.h>

int main()
{
    int v1;

    scanf("%d", &v1);
    
    if(v1>0){
        printf("positivo");
    }if(v1<0){
        printf("negativo");

    }if (v1==0){
        printf("insira um valor maior ou menor que zero");
    }
    
    return 0;
}
