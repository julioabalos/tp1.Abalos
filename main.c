#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    char seguir='s';
    int opcion=0;
    float num1 = 0;
    float num2 = 0;
    float resultado;
    int auxFactorial;


    while(seguir=='s')
    {
        system("cls");
        printf("MENU DE OPCIONES\n\n");
        printf("1- Ingresar 1er operando (A=%.2f)\n", num1);
        printf("2- Ingresar 2do operando (B=%.2f)\n", num2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        printf("\nElige una opcion: ");
        scanf("%d", &opcion);

        while(opcion<1 || opcion>9)
        {
            printf("\nERROR!... Opcion no encontrada! Intentalo de nuevo.\n");
            printf("\nElige una opcion: ");
            scanf("%d", &opcion);
        }

        switch(opcion)
        {
            case 1:
                {
                    printf("ingrese valor del 1er operando: ");
                    scanf("%f", &num1);
                }
                break;

            case 2:
                {
                    printf("ingrese valor del 2do operando: ");
                    scanf("%f", &num2);
                }
                break;

            case 3:
                {
                    resultado = sumar(num1, num2);
                    printf("la suma es: %.2f\n\n", resultado);
                    system("pause");
                }
                break;

            case 4:
                {
                    resultado = restar(num1, num2);
                    printf("la resta es: %.2f\n\n", resultado);
                    system("pause");
                }
                break;

            case 5:
                {
                    if(num2==0)
                    {
                        printf("ERROR!... No es posible dividir por 0.\n");
                        system("pause");
                        break;
                    }
                    else
                    {
                        resultado = dividir(num1, num2);
                        printf("el cociente es: %.2f\n\n", resultado);
                        system("pause");
                    }
                }
                break;

            case 6:
                {
                    resultado = multiplicar(num1, num2);
                    printf("el producto es: %.2f\n\n", resultado);
                    system("pause");
                }
                break;

            case 7:
                {
                    auxFactorial=num1;


                    if(num1<=0 || num1-auxFactorial!=0)
                    {
                        printf("ERROR!.. No se puede realizar factorial de numeros negativos y racionales.\n\n");
                        system("pause");
                    }
                    else
                    {
                        resultado = factorial(num1);
                        printf("factorial de 1er operando es: %.f\n\n", resultado);
                        system("pause");
                    }

                }
                break;

            case 8:
                {
                    resultado = sumar(num1, num2);
                    printf("la suma es: %.2f\n\n", resultado);
                    resultado = restar(num1, num2);
                    printf("la resta es: %.2f\n\n", resultado);
                    if(num2==0)
                    {
                        printf("ERROR!... No es posible dividir por 0.\n\n");
                    }
                    else
                    {
                        resultado = dividir(num1, num2);
                        printf("el cociente es: %.2f\n\n", resultado);
                    }
                    resultado = multiplicar(num1, num2);
                    printf("el producto es: %.2f\n\n", resultado);
                    auxFactorial=num1;
                    if(num1<=0 || num1-auxFactorial!=0)
                    {
                        printf("ERROR!.. No se puede realizar factorial de numeros negativos y racionales.\n\n");
                        system("pause");
                    }
                    else
                    {
                        resultado = factorial(num1);
                        printf("factorial de 1er operando es: %.f\n\n", resultado);
                        system("pause");
                    }

                }
                break;

            case 9:
                seguir = 'n';
                printf("\n\nHasta luego!...\n\n");
                break;
        }
    }


    return 0;
}
