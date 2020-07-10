#include <stdio.h>

void bonAppetit(int bill_count, int* bill, int k, int b) {
    int appetit, sm = 0;
    for(int i = 0 ; i < bill_count ; i++)
        if(i!=k)
            sm += bill[i];
    appetit = b-sm/2;
    if(appetit<=0)
        printf("Bon Appetit\n");
    else
        printf("%i\n", appetit);
}

int main(){
    int bill[] = {3, 10, 2, 9};
    bonAppetit(4, bill, 1, 12);
    bonAppetit(4, bill, 1, 7);
    return 0;
}