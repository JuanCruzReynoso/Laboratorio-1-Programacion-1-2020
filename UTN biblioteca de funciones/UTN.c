#include <stdio.h>
#include <stdlib.h>
#include "UTN.h"

int utn_getInt(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos)
{
    int retorno = -1;
    int bufferInt;

    if (pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
    {
        do
        {
            printf("%s\n",mensaje);
            scanf("%d", &bufferInt);

            if (bufferInt >= minimo && bufferInt <= maximo)
            {
                *pResultado = bufferInt;
                retorno = 0;
                break;
            }
            else
            {
                printf("%s", mensajeError);
                reintentos--;
            }
        }
        while(reintentos >= 0);
    }
    return retorno;
}

int utn_getFloat(float* pResultado,char* mensaje,char* mensajeError,float minimo,float maximo,int reintentos)
{
    int retorno = -1;
    float bufferFloat;
    if (pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
    {
        do
        {
            printf("%s\n",mensaje);
            scanf("%f", &bufferFloat);

            if (bufferFloat >= minimo && bufferFloat <= maximo)
            {
                *pResultado = bufferFloat;
                retorno = 0;
                break;
            }
            else
            {
                printf("%s", mensajeError);
                reintentos--;
            }
        }
        while(reintentos >= 0);
    }
    return retorno;
}

int utn_getChar(char* pResultado,char* mensaje,char* mensajeError,char minimo,char maximo,int reintentos)
{
    int retorno = -1;
    char bufferChar;
    if (pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
    {
        do
        {
            printf("%s\n",mensaje);
            fflush(stdin);
            scanf("%c", &bufferChar);

            if (bufferChar >= minimo && bufferChar <= maximo)
            {
                *pResultado = bufferChar;
                retorno = 0;
                break;
            }
            else
            {
                printf("%s", mensajeError);
                reintentos--;
            }
        }
        while(reintentos >= 0);
    }
    return retorno;
}


