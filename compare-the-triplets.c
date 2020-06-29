#include <stdio.h>
#include <stdlib.h>

int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
    int *pontos = malloc(2*sizeof(int));
    pontos[0] = pontos[1] = 0;
    *result_count = 2;
    for(int i = 0 ; i < 3 ; i++ ){
        if(a[i] > b[i])
            pontos[0]++;
        else if(a[i] < b[i])
            pontos[1]++;
    }

    return pontos;
}

int main(){
    int a[] = {5, 6, 7};
    int b[] = {3, 6, 10};
    int tamanho;
    int *resultado = compareTriplets(3, a, 3, b, &tamanho);
    printf("%i %i", resultado[0], resultado[1]);
}