#include <stdio.h>
//
void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int* apples, int oranges_count, int* oranges) {
    long int i, macas, laranjas;
    macas = laranjas = 0;
    for(i = 0 ; i <  apples_count ; i++){
        if(s <= apples[i]+a && t >= apples[i]+a)
            macas++;
    }
    for(i = 0 ; i <  oranges_count ; i++){
        if(s <=  oranges[i]+b && t >= oranges[i]+b)
            laranjas++;
    }
    printf("%li\n%li\n", macas, laranjas);
}

int main(){
    int apples[] = {2, 3, -4};
    int oranges[] = {3, -2, -4};
    countApplesAndOranges(7, 10, 4, 12, 3, apples, 3, oranges);
    return 0;
}