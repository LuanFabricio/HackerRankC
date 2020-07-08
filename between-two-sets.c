#include <stdio.h>

int getTotalX(int a_count, int* a, int b_count, int* b) {
    int i, j, div, c_count;
    c_count = 1;
    int x = a[1];
    int arr[100];
   while(x <= b[0]+1){
        div = 1;
        for(j = 0 ; j < b_count ; j++)
            if(b[j]%x != 0)
                div = 0;
        if(div){
            arr[c_count++] = x;
        }
        x++;
    }
    
    for(i = 0 ; i < c_count ; i++)
        printf("%i\n", arr[c_count]);

    return 1;
}

int main(){
    int a[] = {2, 4};
    int b[] = {16, 32, 96};
    printf("%i\n",getTotalX(2, a, 3, b));
    int c[] = {3, 4};
    int d[] = {24, 48};
    printf("%i\n",getTotalX(2, c, 3, d));
    return 0;
}