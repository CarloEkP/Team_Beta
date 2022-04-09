#include <stdio.h>
#include "maximo.h"
#include "minimo.h"
#include "find.h"
#include "odd.h"

int main(int argc, char const *argv[])
{
    int tamanio = 5, buscar;
    int arreglo[] = {2, 3, 5, 6, 7};
    printf("el tamanio maximo es: %d", Max(arreglo, tamanio));
    printf("el tamanio minimo es: %d", minimo(arreglo, tamanio));
    scanf("%d");
    scanf("introduce un numero a buscar en el array %d ", &buscar);
    printf("%d el valor ", bsucar(arreglo, tamanio, buscar));
    printf("los numero impares son: ", odd(arreglo, tamanio));
}