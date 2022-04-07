#define _MAXIMO

int Max(int valores[], int tamanio){
    int maximo =0;
    for (int i = 0; i < tamanio; i++)
    {
        if (valores[i] > maximo)
        {
            maximo = valores[i];
        }
    }
    return maximo;
}