#include <stdio.h>

int pageCount(int n, int p) {
    int minimo, nPag_viradas;
    for(int i = 1, nPag_viradas=0; i < n+1 ; i+=2, nPag_viradas++){
        if(i==p||i-1==p){
            printf("1°-%i\n",nPag_viradas);
            minimo=nPag_viradas;
            break;
        }
    }
    for(int i = n, nPag_viradas=0; i > 1 ; i-=2, nPag_viradas++){
        if((i==p||i-1==p)&&nPag_viradas<minimo){
            if(n%2==0&&p%2!=0)
                nPag_viradas++;
            printf("2°-%i\n",nPag_viradas);
            minimo=nPag_viradas;
            break;
        }
    }
    return minimo;
}

int main(){
    printf("%i\n", pageCount(5,4));
    printf("%i\n", pageCount(6,4));
    printf("%i\n", pageCount(6,5));

    return 0;
}