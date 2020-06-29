#include <stdio.h>

int simpleArraySum(int ar_count, int* ar) {
    int resultado = 0;
    for(int i = 0 ; i < ar_count ; i++)
        resultado += ar[i];
    return resultado;
}
int main (){
    int arr[] = {1, 2, 3};
    printf("\n%i\n",simpleArraySum(3, arr));
    return 0;
}