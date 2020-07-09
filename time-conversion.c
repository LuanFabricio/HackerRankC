#include <stdio.h>
#include <string.h>

char* timeConversion(char* s) {
    static char hora[8];
    strncpy(hora, s, 8);
    if(s[8] == 'A'){
        if(hora[0] == '1' && hora[1] == '2'){
            hora[0] = hora[1] = '0';
        }
        return hora;
    }
    else
    {
        if(hora[0] == '1' && hora[1] == '2')
            return hora;
        int time[] = {(int)s[0] - 47, (int)s[1] - 46};
        if(time[1] > 9){
            time[0]++;
            time[1] -= 10; 
        }
        hora[0] = (char)(time[0]+48);
        hora[1] = (char)(time[1]+48);
        return hora;
    }
    
}

int main(){
    char hora[] = "12:05:45PM";

    printf("%s", timeConversion(hora));
    return 0;
}