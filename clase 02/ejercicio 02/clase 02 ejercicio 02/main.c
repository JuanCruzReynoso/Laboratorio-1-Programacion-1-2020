#include <stdio.h>
#include <stdlib.h>


int main()
{
    int numero;
    int contador = 0;
    int acumulador = 0;
    int contadorPares = 0;
    int contadorPos = 0;
    int contadorNeg = 0;
    float promedio;
    int maximo;
    int minimo;
    char respuesta;

    do
    {
        printf("ingrese un numero: ");
        scanf("%d",&numero);

        if (numero % 2 == 0)
        {
            contadorPares++;
        }

        if (numero>0)
        {
            contadorPos++;
        }
        else
        {
            contadorNeg++;
        }



        if (numero>maximo || contador == 0)
        {
            maximo=numero;
        }

        if (numero<minimo || contador == 0)
        {
            minimo=numero;
        }



        acumulador=acumulador+numero;
        contador++;

        fflush(stdin);
        printf("desea continuar? (s para continuar): ");
        scanf("%c",&respuesta);

    }while(respuesta=='s');

    promedio=(float)acumulador/contador;

    printf("cantidad de numeros pares: %d", contadorPares);
    printf("\ncantidad de positivos: %d", contadorPos);
    printf("\ncantidad de negativos: %d", contadorNeg);
    printf("\npromedio: %f", promedio);


    return 0;
}
