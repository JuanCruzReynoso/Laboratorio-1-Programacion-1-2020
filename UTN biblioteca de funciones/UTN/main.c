#include <stdio.h>
#include <stdlib.h>
#include "UTN.h"

int main(void)
{
    int resultado;
    int entero;
    float decimal;
    char caracter;

    resultado=utn_getInt(&entero, "Ingrese un numero entero :\n","Rango excedido, ingrese un numero entero (1 a 100)\n",1,100,2);
    if(resultado == 0)
    {
        printf("El entero es : %d\n",entero);
    }
    else
    {
        printf("\nSupero la cantidad de intentos");
    }

    resultado=utn_getFloat(&decimal, "Ingrese un numero decimal :\n","Rango excedido, ingrese un numero decimal\n",0.00,99.9,2);
    if(resultado == 0)
    {
        printf("El decimal es : %.2f\n",decimal);
    }
    else
    {
        printf("\nSupero la cantidad de intentos");
    }

    resultado=utn_getChar(&caracter, "Ingrese un caracter :\n","Rango excedido, ingrese un caracter (a a la z)\n",'a','z',2);
    if(resultado == 0)
    {
        printf("El caracter es : %c\n",caracter);
    }
    else
    {
        printf("\nSupero la cantidad de intentos");
    }


    return EXIT_SUCCESS;
}
