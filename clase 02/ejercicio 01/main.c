#include <stdio.h>
#include <stdlib.h>

//Pedirle al usuario que ingrese 2 n�meros enteros y que muestre:La suma de los dos n�meros.Disminuir del segundo, el primero.El producto de ambos n�meros.Promedio de ambos n�meros.
int main()
{
    int numeroUno;
    int numeroDos;

    int suma;
    int resta;
    int multi;
    float prom;

    printf("ingrese un numero: ");
    scanf("%d", &numeroUno);

    printf("ingrese otro numero: ");
    scanf("%d", &numeroDos);

    suma= numeroUno+numeroDos;
    resta=numeroDos-numeroUno;
    multi=numeroUno*numeroDos;
    prom=(float)suma/2;

    printf("la suma es: %d\n",suma);
    printf("la resta es: %d\n",resta);
    printf("la multiplicacion es: %d\n",multi);
    printf("el promedio es: %f\n",prom);


    return 0;
}
