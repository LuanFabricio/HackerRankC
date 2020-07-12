#include <stdio.h>

int getTotalX(int a_count, int* a, int b_count, int* b) {
    int i, j, c, divide, maior;
    maior = a[0];
    c=0;
    for(i = 1 ;  i < a_count ; i++)
        if(a[i]>maior)
            maior=a[i];
    for(i = maior ; i < b[0]+1 ; i++){
        divide=1;
        for(j=0 ; j < b_count ; j++){
            //printf("%i=-=-=-=%ie%i\n", i, b[j]%i, i%a[0]);
            if(b[j]%i!=0||i%a[0]!=0||i%maior!=0||(maior*a[0])%i==0){
                //printf("%i-%i-%i-%i-%i\n",i,b[j],b[j]%i,i%a[0],i%a[a_count-1]);
                divide=0;
                break;
            }
        }
        if(divide){
            printf("%i\\\n",i);
            c++;
        }
    }
    
    return c;
}

int main(){
    int a[] = {3, 9, 6};
    int b[] = {36, 72};
    printf("%i\n",getTotalX(3, a, 2, b));
    return 0;
}