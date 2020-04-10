#include <stdio.h>
#include <stdlib.h>

int main()
{
    char mes [10];
    printf("Ingrese un mes: ");
    fflush(stdin);
    scanf("%s", mes);
    switch (mes)
    {
    case enero:
    case febrero:
    case marzo:
        puts ("verano");
        break;
    case abril:
    case mayo:
    case junio:
        puts ("otonio");
        break;
    case julio:
    case agosto:
    case septiembre:
        puts ("invierno");
        break;
    case octubre:
    case noviembre:
    case dicembre:
        puts ("primavera");
        break;
    }
    system("pause");
    return 0;
}
