#include <stdio.h>

char* timeConversion(char* s) {
    if(s[9] == 'A')
        return s;
    else
    {
        printf("%c%c", (int)s[0]+1,(int)s[1]+2);
    }
    
}

int main(){
    char hora[] = "07:05:45PM";

    timeConversion(hora);
    return 0;
}