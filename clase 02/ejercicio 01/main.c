#include <stdio.h>
#include <stdlib.h>

//Pedirle al usuario que ingrese 2 números enteros y que muestre:La suma de los dos números.Disminuir del segundo, el primero.El producto de ambos números.Promedio de ambos números.
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
