#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 10

#define CANTIDAD 3
int main()
{
    int ListadoDeEdades[CANTIDAD];
    int i;
    char respuesta;

    for(i=0; i<CANTIDAD; i++)
    {
        ListadoDeEdades[i]=-1;
    }
 ListadoDeEdades[1]=666;


    do
    {
        for(i=0; i<CANTIDAD; i++)
        {
            if(ListadoDeEdades[i]==-1)
            {
                break;
            }
        }

        printf("\ningrese edad %d: ",i);
        scanf("%d",&ListadoDeEdades[i]);

        printf("\ndesea continuar? : ");
        fflush(stdin);
        scanf("%c",&respuesta);



    }
    while(respuesta=='s');

  for(i=0; i<CANTIDAD; i++)
    {
      printf("\nla edad es %d : %d",i,ListadoDeEdades[i]);
    }



        return 0;
}
