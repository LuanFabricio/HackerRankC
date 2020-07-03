#include <stdio.h>

int birthdayCakeCandles(int ar_count, int* ar) {
    int max = ar[0];
    int velas_assopradas = 1;

    for(int i = 1 ; i < ar_count ; i++){
        if(max == ar[i])
            velas_assopradas++;
        else if(max < ar[i]){
            max = ar[i];
            velas_assopradas = 1;
        }
    }

    return velas_assopradas;
}

int main(){
    int velas[] = {3, 1, 2, 3};
    printf("%i\n", birthdayCakeCandles(4, velas));

    return 0;
}