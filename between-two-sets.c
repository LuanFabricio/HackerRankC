#include <stdio.h>

int getTotalX(int a_count, int* a, int b_count, int* b) {
    int i, j, c, divide, maior;
    maior = a[0];
    c=0;

    if(a[0]>b[0])
        return 0;

    for(i = 1 ;  i < a_count ; i++)
        if(a[i]>maior)
            maior=a[i];
    
    if(a[0]==1){
        for(i=maior;i<b[0]+1;i++){
            divide=1;
            for(j=0;j<b_count;j++)
                if(b[j]%i!=0){
                    divide=0;
                    break;
                }
            if(divide)
                c++;
        }
    }
    else{
        for(i=maior;i<b[0]-1;i*=a[0]){
            divide=1;
            for(j=0;j<b_count;j++)
                if(b[j]%i!=0||i%a[0]!=0){
                    divide=0;
                    break;
                }
            if(divide)
                c++;
        }
        divide=1;
        for(j=1;j<b_count;j++)
            if(b[j]%b[0]!=0){
                divide=0;
                break;
            }
        if(divide)
            c++;
                  
    }
    
    return c;
}

int main(){
    int a[] = {3, 9, 6};
    int b[] = {36,72};
    printf("%i\n",getTotalX(3, a, 2, b));
    return 0;
}