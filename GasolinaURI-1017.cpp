#include <stdio.h>

int main()
{
    int hora, velomedia;

    //printf("insira o tempo da viagem em horas:\n");
    scanf("%d", &hora);

    //printf("insira a velocidade media da viagem:\n");
    scanf("%d", &velomedia);

    printf("%.3f\n", (velomedia / 12.0) * hora);

    return 0;
}
