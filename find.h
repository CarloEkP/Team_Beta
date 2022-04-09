#define _BUSCAR
bool bsucar(int array[], int number, int ind){
    for (int i = 0; i < ind; i++)
    {
        if(array[i] == number){
            return true;
            break;
        }
    }
    
    return false;
}