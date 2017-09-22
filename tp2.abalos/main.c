#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define TAM 20


int main()
{
    ePersonas persona[TAM];
    inicializar(persona, TAM);

    char seguir='s';

    do
    {
        system("cls");

        switch (menu())
        {
            case 1:
                agregar(persona, TAM);
                break;
            case 2:
                borrar(persona, TAM);
                break;
            case 3:
                listar(persona, TAM);
                break;
            case 4:
                graficoEdad(persona, TAM);
                break;
            case 5:
                seguir='n';
                break;
            default:
                printf("\nOpcion invalida\n");

        }

        printf("\n");
        system("pause");

    }while (seguir=='s');

    return 0;
}


