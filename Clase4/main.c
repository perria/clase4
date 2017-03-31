#include <stdio.h>
#include <stdlib.h>
#include "func.h"
#define MAX 100

int eliminarElemento(int edad[], int indice, int size)
{

    int i;

    for(i=indice; i<size; i++)
    {
        edad[i]=edad[i+1];
    }
    return size-=1;
}



int main()
{
    int i=5, aux, j, indice, size=5;
    int edad[MAX] = {22,11,33,55,66};
    char respuesta;
    int buffer;

    /*void ordenar(int edad[])
    {
        for(i=0;i<MAX-1;i++)
        {
            for(j=i+1; j<MAX; j++)
            {
                if(edad[i]>edad[j])
                {
                    aux=edad[i];
                    edad[i]=edad[j];
                    edad[j]=aux;
                }
            }
        }
    }*/

    printf("%d\n", edad);



    printf("Ingrese elemento a eliminar: ");
    scanf("%d", &indice);
    eliminarElemento(edad, indice, size);
    printf("lista nueva %d", edad );




    /*for(i=0; i<MAX;i++){

        printf("\nIngrese la edad de la persona %d: ", i);
        scanf("%d", &edad[i]);

        printf("\n\nDesea seguir ingresando? [s/n]");
        fflush(stdin);
        scanf("%c", &respuesta);

        if(respuesta!='s'&&respuesta!='S'){
            break;
        }

        system("cls");
    }*/

    //printf("\nEl promedio de las edades ingresadas es %.2f", promedio(edad, i+1));

    return 0;
}
