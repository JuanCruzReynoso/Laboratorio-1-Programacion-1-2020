#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    int respuesta;
    int edadUno;
    int edadDos;

    edadUno=30;
    edadDos=20;

    saludar();
    respuesta=suma(33,100);
    printf("\nla suma de literales es : %d",respuesta);
    respuesta=suma(edadUno,edadDos);
    printf("\nla suma de variables es : %d",respuesta);

    return 0;
}

