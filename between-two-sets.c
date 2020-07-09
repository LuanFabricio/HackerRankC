#include <stdio.h>

int getTotalX(int a_count, int* a, int b_count, int* b) {
    if(b_count == 1)
        return 0;
    
    int i, j, div, x, c_count;
    c_count = 0;
    if(a_count < 2)
        x = a[0];
    else
        x = a[1];
    while(x <= b[0]){
        div = 1;
        for(j = 0 ; j < b_count ; j++)
            if(b[j]%x != 0)
                div = 0;
        if(div)
            c_count++;
        if(x == x*a[0])
            x++;
        else
            x *= a[0];
    }

    for(i = 1 ; i < 100 ; i++)
        if(100%i == 0)
            printf("%i\t%i\t", i, 100/i);
    
    return c_count;
}

int main(){
    int a[] = {2, 4};
    int b[] = {16, 32, 96};
    //printf("%i\n",getTotalX(2, a, 3, b));
    int c[] = {2, 3, 6};
    int d[] = {42, 84};
    printf("\n%i\n",getTotalX(3, c, 2, d));
    int e[] = {51};
    int f[] = {50};
    //printf("%i\n",getTotalX(1,e,1,f));
    int g[] = {1};
    int h[] = {72, 48};
    //printf("%i\n", getTotalX(1,g,2,h));
    return 0;
}