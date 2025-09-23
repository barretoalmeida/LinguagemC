#include <stdio.h>
#include <stdlib.h>

void criar_index(char *nome){//esta dando libertade para o usuario criar.
    FILE *pagina;
    pagina = fopen(nome,"a");
    fprintf(pagina,"<html><body><h1>Bem Vindo</h1></body></html>");
    fclose(pagina);

}