#include <stdio.h>
#include "maximo.h"
#include "minimo.h"

int main(int argc, char const *argv[])
{
    int tamanio = 5;
   int arreglo[]={2,3,5,6,7};
   printf("el tamanio maximo es: %d", Max(arreglo, tamanio));
   printf("el tamanio minimo es: %d", MIN(arreglo, tamanio));
   scanf("%d");
}