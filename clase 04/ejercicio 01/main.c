#include <stdio.h>
#include <stdlib.h>

int factorial(int num);

int main()
{
    int numero;
    int respuesta;


    respuesta=factorial(5);
    printf("\nel factorial es : %d",respuesta);
    return 0;
}

int factorial(int num)
{
    int resultado;
    if (num==0){
        resultado=1;
    }else
    {
    resultado=num*factorial(num-1);
    }
    return resultado;

}
