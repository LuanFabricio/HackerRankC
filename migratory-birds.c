#include <stdio.h>

int migratoryBirds(long int arr_count, int* arr) {
    long int birds_types[5];
    int maior = arr[0];
    birds_types[0]=birds_types[1]=birds_types[2]=birds_types[3]=birds_types[4]=0;
    for(int i = 0 ; i < arr_count ; i++){
        birds_types[arr[i]-1]++;
        if(birds_types[arr[i]-1] > birds_types[maior-1])
            maior = arr[i];
        else if(birds_types[arr[i]-1] == birds_types[maior-1])
                if(arr[i] < maior)
                    maior = arr[i];
    }

    return maior;
}

int main(){
    int birds[] = {1, 4, 4, 3, 5, 3};

    printf("%i\n", migratoryBirds(6, birds));

    return 0;
}