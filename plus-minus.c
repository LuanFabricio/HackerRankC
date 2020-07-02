#include <stdio.h>

void plusMinus(int arr_count, int* arr) {
    float positivo, negativo, nulo;
    positivo = nulo = negativo = 0;
    for(int i = 0 ; i < arr_count ; i++){
        if(arr[i] > 0)
            positivo++;
        else if(arr[i] < 0)
            negativo++;
        else
            nulo++;
    }
    printf("%.4f\n%.4f\n%.4f\n", (float)positivo/arr_count, (float)negativo/arr_count, (float)nulo/arr_count);

}

int main(){
    int arr[] = {-4, 3, -9, 0, 4, 1};
    plusMinus(6, arr);

    return 0;
}