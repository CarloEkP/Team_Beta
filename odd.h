#define _ODD

void impares(int valores[], int tamanio){
    for (int i = 0; i < tamanio; i++)
    {
        if(valores[i] %2 == 0){
            printf("%d", valores[i]);
        }
    }
        
}