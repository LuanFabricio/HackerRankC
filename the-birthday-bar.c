#include <stdio.h>

int birthday(int s_count, int* s, int d, int m) {
    int nums[m];
    int sm, cont, numsCont;
    sm = cont = numsCont = 0;
    for(int i = 0 ; i < s_count ; i++){
        if(numsCont+1 > m){
            if(sm == d)
                cont++;
            sm -= nums[0];
            for(int j = 1 ; j < m ; j++)
                nums[j-1] = nums[j];
            nums[m-1] = s[i];
        }
        else
            nums[numsCont++] = s[i];
        sm += s[i];
    }
    if(sm == d)
        cont++;

    return cont;
}

int main() {
    int barra[] = {3, 1, 3};

    printf("%i\n", birthday(3, barra, 3, 1));
    return 0;
}