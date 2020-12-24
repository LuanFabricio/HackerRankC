#include <stdio.h>
#include <stdlib.h>

int* reverseArray(int a_count, int* a, int* result_count) {

    *result_count = a_count;
    int* arr_r = malloc( sizeof(int) * a_count);

    for ( int i = 0 ; i < a_count ; i++ )
        arr_r[i] = a[a_count-i-1];

    return arr_r;
}

int main () {

    int arr[] = {1, 2, 3};
    int tamanho = 3;
    int novo_tamanho;

    int* arr_r = reverseArray( 3, arr, &novo_tamanho );

    for( int i = 0 ; i < novo_tamanho ; i++)
        printf("%i ", arr_r[i]);

    return 0;
}