#include <stdio.h>
#include <stdlib.h>

long aVeryBigSum(int ar_count, long* ar) {
    long soma = 0;
    for(int i = 0 ; i < ar_count ; i++)
        soma += ar[i];

    return soma;
}

int main(){
    long arr[] = {1000000001, 1000000002, 1000000003, 1000000004, 1000000005};
    printf("%li", aVeryBigSum(5, arr));

    return 0;
}