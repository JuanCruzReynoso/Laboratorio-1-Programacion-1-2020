#include <stdio.h>
#include <stdlib.h>
#include "repaso2.h"

int getInt(char mensaje[],char mError[], int min, int max)
{
    int dato;

    printf("%s ", mensaje);
    scanf("%d", &dato);

    while(dato<min || dato>max)
    {
        printf("%s", mError);
        scanf("%d", & dato);
    }

    return dato;
}

int esPositivo(int numero)
{
    int retorno;

    if (numero > 0)
    {
        retorno=1;
    }
    else if (numero < 0)
    {
        retorno=0;
    }

    return retorno;
}

float promediarNumeros(int acumulador,int contador)
{
    float promedio;

    promedio = (float)acumulador/contador;

    return promedio;
}


