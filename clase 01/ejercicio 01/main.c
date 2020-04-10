#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int numero;
    int numeroMayor;
    int flag=0;

    for(i=0; i<3; i++)
    {
        printf("ingrese un numero :", numero);
        scanf("%d",&numero);
        if (numero>numeroMayor||flag==0){
            numeroMayor=numero;
            flag=1;
        }
        }
        printf("el numero mayor es : %d", numeroMayor);
        return 0;
}
