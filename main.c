#include <stdio.h>
#include "personaje.h"

void mostrar(int n, char cadena[])
{
    for (size_t i = 0; i < n; i++)
    {
        printf("%s",cadena);
    }

}

void capturar_enteros()
{
    int enteros[5];
    float promedio;
    int suma = 0;

    for (size_t i = 0; i < 5; i++)
    {
        printf("Entero: \n");
        scanf("%i", &enteros[i]);
    }

    for (size_t i = 0; i < 5; i++)
    {
        printf("%i\n", enteros[i]);
    }

    for (size_t i = 0; i < 5; i++)
    {
        suma += enteros[i];
    }

    printf("Suma: %i\n", suma);
    printf("Promedio: %f\n", suma/ 5.00);
}

int main(void) {
  int op;
  char cadena[20];
  int n;
  
  do 
  {
    printf("1) Capturar enteros\n");
    printf("2) Mostrar cadena n veces\n");
    printf("3) Agregar personajes\n");
    printf("4) Mostrar personajes\n");
    printf("0) Salir\n");
    scanf("%d", &op);

    fflush(stdin);

    switch (op)
    {
        case 1:
            capturar_enteros();
            break;
        case 2:
            printf("Escribe una cadena de hasta 20 caracteres: ");
            fflush(stdin);
            fgets(cadena, sizeof(cadena), stdin);
            fflush(stdin);
            printf("n: ");
            scanf("%i", &n);
            mostrar(n, cadena);
            break;
        case 3:
            capturar_personajes();
            break;
        case 4:
            mostrar_personajes();
            break;
        default:
            break;
    }

  } while (op != 0);

}