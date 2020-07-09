#include <stdio.h>

int divisibleSumPairs(int n, int k, int ar_count, int* ar) {
    int numDiv = 0;

    for(int i = 0 ; i < ar_count-1 ; i++){
        for(int j = i+1 ; j < ar_count ; j++)
            if((ar[i]+ar[j])%k == 0)
                numDiv++;
    }

    return numDiv;
}

int main(){
    int ar[] = {1,3,2,6,1,2};

    printf("%i\n", divisibleSumPairs(6, 2, 6, ar));

    return 0;
}