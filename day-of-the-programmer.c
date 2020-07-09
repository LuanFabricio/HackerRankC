#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* dayOfProgrammer(int year) {
    int mes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i, j;
    int dias = 0;
    char data = malloc(10*sizeof(char));
    if(year%4 == 0)
        mes[1]++;
    
    for(i = 0 ; i < 12 ; i++){
        if(dias+mes[i]>256){
            j = 256 - dias;
            i++;
            break;
        }
        else if(dias+mes[i] == 256){
            dias += mes[i];
            j = mes[i];
            i++;
            break;
        }
        dias += mes[i];
    }

    strcat(data, j);
    printf("%i.%i.%i\n", j, i, year);
    return data;
    

}

int main(){
    printf("%s",dayOfProgrammer(2016));

    return 0;
}