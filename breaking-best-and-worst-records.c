#include <stdio.h>
#include <stdlib.h>

int* breakingRecords(int scores_count, int* scores, int* result_count) {
    *result_count = 2;
    int max, min;
    int* resultado = malloc(2*sizeof(int));
    resultado[0] = resultado[1];
    max = min = scores[0];
    for(int i = 0 ; i < scores_count ; i++){
        if(max < scores[i]){
            max = scores[i];
            resultado[0]++;
        }
        else if(min > scores[i]){
            min = scores[i];
            resultado[1]++;
        }
        else continue;
    }

    return resultado;
}

int main(){
    int scores[] = {10, 5, 20, 20, 4, 5, 2, 25, 1};
    int count;
    int* maxEMin = malloc(2*sizeof(int));
    maxEMin = breakingRecords(9, scores, &count);

    printf("%i %i\n",maxEMin[0], maxEMin[1]);
    return 0;
}