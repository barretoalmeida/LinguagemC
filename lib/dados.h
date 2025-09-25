#include <stdio.h>
#include <stdlib.h>

void dados( char *email, char *name,  char *ano, char *idade){
    FILE *arquivo;
    arquivo = fopen("Dados.txt","a"); 
    fputs(email,arquivo);
    fputs(name,arquivo);
    fputs(ano,arquivo);
    fputs(idade,arquivo);
    fclose(arquivo);
}
