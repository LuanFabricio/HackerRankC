#include <stdio.h>
#include <string.h>

char* kangaroo(int x1, int v1, int x2, int v2) {
    char* resp;
    if(v1 <= v2 || (x2-x1)%(v1-v2) != 0){
        return "NO";
    }
    else{
        return "YES";
    }
}

int main(){
    printf("%s\n", kangaroo(0, 4, 3, 2));
    return 0;
}