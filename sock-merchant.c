#include <stdio.h>

int sockMerchant(int n, int ar_count, int* ar) {
    int pares = 0;
    for(int i = 0 ; i < ar_count ; i++){
        for(int j = i+1 ; j < ar_count ; j++){
            if(ar[i]==ar[j] && ar[i]!=0){
                pares++;
                ar[j]=0;
                break;
            }
        }
    }

    return pares;
}

int main()
{
    int arr[] = {10,20,20,10,10,30,50,10,20};
    printf("%i\n", sockMerchant(9,9,arr));
    return 0;
}
