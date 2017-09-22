#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

    int dni;
    char nombre[51];
    int edad;
    int estado;

} ePersonas;


int menu()
{
    int opcion=0;

    printf("***MENU****\n\n");
    printf("1. Agregar una persona.\n");
    printf("2. Borrar una persona.\n");
    printf("3. Imprimir lista ordenada.\n");
    printf("4. Grafico de edades.\n");
    printf("5. Salir.\n");

    printf("\nIngrese opcion: ");
    scanf("%d", &opcion);

    printf("\n");

    return opcion;
}

void inicializar(ePersonas pers[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        pers[i].estado=0;
    }
}

int buscarLibre(ePersonas pers[], int tam)
{
    int i;
    int indice=-1;

    for(i=0; i<tam; i++)
    {
        if(pers[i].estado==0)
        {
            indice=i;
        }
    }

    return indice;
}

void agregar(ePersonas persona[], int tam)
{
    int indice;

    indice=buscarLibre(persona, tam);

    if(indice==-1)
    {
        printf("\nNo hay espacio disponible\n");
    }
    else
    {

        printf("\nNUEVO INGRESO:");
        printf("\nNombre: ");
        fflush(stdin);
        gets(persona[indice].nombre);

        printf("\nDNI: ");
        fflush(stdin);
        scanf("%d", &persona[indice].dni);

        printf("\nEdad: ");
        fflush(stdin);
        scanf("%d", &persona[indice].edad);

        persona[indice].estado=1;
    }
}


void borrar(ePersonas persona[], int tam)
{
    int auxDni;
    int indice=0;


    printf("\nLISTA ACTUALIZADA:\n");
    informar(persona, tam);
    printf("\n\nIngrese DNI que quiere dar de baja: ");
    scanf("%d", &auxDni);

    indice=buscarDni(persona, tam, auxDni);

    if(indice==-1)
    {
        printf("\nEl DNI %d no existe!\n", auxDni);
    }
    else
    {
        persona[indice].estado=0;
        printf("\nDatos eliminados con exito.\n");
    }
}

void informar (ePersonas pers[], int tam)
{
    int i;

    printf("EDAD -   DNI   - NOMBRE");
    printf("\n");

    for(i=0; i<tam; i++)
    {
        if(pers[i].estado==1)
        {
            printf("\n%4d  %7d   %s", pers[i].edad, pers[i].dni, pers[i].nombre);
        }
    }
}

int buscarDni(ePersonas pers[], int tam, int auxDni)
{
    int i;
    int indice=-1;

    for(i=0; i<tam; i++)
    {
        if(pers[i].dni==auxDni)
        {
            indice=i;
        }
    }

    return indice;
}


void listar(ePersonas persona[], int tam)
{
    int i;
    int j;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(persona[i].nombre, persona[j].nombre)==1)
            {
                ePersonas aux = persona[i];
                persona[i]=persona[j];
                persona[j]=aux;
            }

            if((strcmp(persona[i].nombre, persona[j].nombre)==0) && (persona[i].edad>persona[j].edad))
            {
                ePersonas aux = persona[i];
                persona[i]=persona[j];
                persona[j]=aux;
            }
        }
    }

    informar(persona, tam);
}

int graficoEdad(ePersonas persona[], int tam)
{

    int i;
    int cont18 = 0;
    int cont19a35 = 0;
    int cont35 = 0;
    int flag=0;
    int mayor;

    for(i=0; i<20; i++)
    {
        if(persona[i].estado==1 && persona[i].edad < 19)
        {
            cont18++;
        }
        if(persona[i].estado==1 && persona[i].edad > 18 && persona[i].edad < 36)
        {
            cont19a35++;
        }
        if(persona[i].estado==1 && persona[i].edad > 35)
        {
            cont35++;
        }

    }


    if(cont18 >= cont19a35 && cont18 >= cont35)
    {
        mayor = cont18;
    }
    else
    {

        if(cont19a35 >= cont18 && cont19a35 >= cont35)
            {

            mayor = cont19a35;

            }

        else
            {

            mayor = cont35;

            }
    }

    printf("\n\n");

    for(i=mayor; i>0; i--)
    {
        if(i<tam)
        {
            printf("%02d|",i);
        }

        else
            printf("%02d|",i);

        if(i<= cont18)
        {
            printf("*");
        }

        if(i<= cont19a35)
        {
            flag=1;
            printf("\t*");
        }

        if(i<= cont35)
        {
            if(flag==0)
                printf("\t\t*");
            if(flag==1)
                printf("\t*");

        }

        printf("\n");
    }
    printf("--+-----------------");
    printf("\n  |<18\t19-35\t>35");
    printf("\n   %d\t%d\t%d\n", cont18, cont19a35, cont35);

    system("pause");

    return 0;
}
