#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* dayOfProgrammer(int year) {
    int bissexto = 0;
    static char data[11]="12.09.0000\0";
    if(year < 1917){

    }
    else if(year == 1918){

    }
    else if(year > 1917){
        if(year%400==0 || (year%4==0 && year%100!=0)) bissexto = 1;
        if(!bissexto) data[1]='3';
        data[6]=(char)(year/1000+48);
        data[7]=(char)(year/100%10+48);
        data[8]=(char)(year/10%10+48);
        data[9]=(char)(year%10+48);
    }
    return data;
}

int main(){
    printf("%s\n",dayOfProgrammer(2016));
    printf("%s\n",dayOfProgrammer(1800));
    printf("%s\n",dayOfProgrammer(2017));
    return 0;
}