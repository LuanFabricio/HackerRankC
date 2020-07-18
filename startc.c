#include <stdio.h>
#include <string.h>

int main(int argV, char* argS[]){
    if(argV > 2 ){
        printf("ERRO! Muitos argumentos.\n");
        return 1;
    }
    char* nome_arquivo;
    if(argV < 2){
        printf("Digite o nome do arquivo: ");
        gets(nome_arquivo);
    }
    else
        strcpy(nome_arquivo, argS[1]);
    
    FILE* arq;
    strcat(nome_arquivo, ".c");
    arq = fopen(nome_arquivo,"wt");
    fprintf(arq,"#include <stdio.h>\n\nint main(){\n\n\treturn 0;\n}");

    fclose(arq);
    return 0;
}