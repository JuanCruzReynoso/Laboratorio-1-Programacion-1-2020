#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion;

    do{
    printf("1. sumar\n");
      printf("2. restar\n");
        printf("3. multiplicar\n");
          printf("4. dividir\n");
            printf("5. salir\n");
            printf("Elija una opcion");

            scanf("%d",&opcion);

            switch(opcion)
            {
                case 1:
                    printf("\nEstoy sumando::::");
                    break;
                    case 2:
                        printf("\nEstoy restando::::");
                        break;
                    case 3:
                        printf("\nEstoy multiplicando::::");
                        break;
                    case 4:
                        printf("\nEstoy dividiendo::::");
                        break;
                        deffault:
                            printf("\nOpcion incorrecta!::::");
            }

            system("pause");
            system("cls");
    }while(opcion!=5);
    return 0;
}
