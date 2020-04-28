#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main()
{
    char nombre[20] ;
    char apellido[20] ;
    char apellidoNombre[40];

    printf("ingrese nombre : ");
    gets(nombre);
    strlwr(nombre);
    nombre[0]=toupper(nombre[0]);
    printf("ingrese apellido : ");
    gets(apellido);
    strlwr(apellido);
    apellido[0]=toupper(apellido[0]);

    strcpy(apellidoNombre,apellido);
    strcat(apellidoNombre,", ");
    strcat(apellidoNombre,nombre);

    puts(apellidoNombre);


    return 0;
}

