#define _MINIMO

int minimo(int valores[], int tamanio){
    int minimo = 100000;
    for (int i = 0; i < tamanio; i++)
    {
        if (valores[i] > minimo)
        {
            minimo = valores[i];
        }
    }
    return minimo;
}