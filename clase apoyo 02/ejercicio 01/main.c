#include <stdio.h>
#include <stdlib.h>
#include "repaso2.h"

int main()
{
    char respuesta;
    int numero;
    int contadorPos = 0;
    int contadorNeg = 0;
    int maximo;
    int contador = 0;
    int acumulador = 0;
    float promedio;

    do
    {
        numero = getInt("Ingrese un numero (entre -100 y 100) : ","dato invalido, ingrese un numero (entre -100 y 100) : ", -100, 100);

        if (esPositivo(numero) == 1)
        {
            if (numero>maximo || contadorPos == 0)
            {
                maximo=numero;
            }
            contadorPos++;
        }
        else if(esPositivo(numero) == 0)
        {
            contadorNeg++;
        }

        acumulador=acumulador+numero;
        contador++;

        printf("desea continuar? (s para continuar): ");
        fflush(stdin);
        scanf("%c",&respuesta);

    }
    while(respuesta=='s');

    promedio=promediarNumeros(acumulador,contador);

    printf("\nLa cantidad de numeros positivos es : %d",contadorPos);
    printf("\nLa cantidad de numeros negativos es : %d",contadorNeg);
    printf("\nEl promedio es : %f",promedio);
    printf("\nDe los positivos el mayor es : %d",maximo);


    return 0;
}
