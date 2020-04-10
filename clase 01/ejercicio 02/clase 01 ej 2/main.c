#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;

    printf("ingrese edad :", edad);
    scanf("%d", &edad);
    if (edad<=12)
    {
        printf("ninio");
    }
    else if(edad>=13 && edad<=17)
    {
        printf("adolecente");
    }
    else
    {
        printf("mayor de edad");
    }
    return 0;
}
