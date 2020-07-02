#include <stdio.h>

void miniMaxSum(int arr_count, int* arr) {
    long int min, max, sm, smMax, smMin;
    sm = 0;
    min = max = arr[0];
    for(int i = 0 ; i < arr_count ; i++){
        if(max < arr[i])
            max = arr[i];
        if(min > arr[i])
            min = arr[i];
        
        sm += arr[i];
    }
    if(max == min)
        smMax = smMin = sm-max;
    else{
        smMax = sm-min;
        smMin = sm-max;
    }
    
    printf("%li %li\n", smMin, smMax);
}

int main(){
    int arr[] = {5, 5, 5, 5, 5};
    miniMaxSum(5, arr);

    return 0;
}