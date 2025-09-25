#include <stdio.h>
#include <stdlib.h>
#include "../lib/gerar_paginas.h"

int main(){
    system("clear");
    
    char arq[20];
    char content[100];
    printf("Digite o nome do arquivo com a extensão e tecle Enter\n");
    fgets(arq,20,stdin);

    getchar();

    printf("Digite o conteúdo do arquivo e tecle Enter\n");
    fgets(content,100,stdin);

    novo_arquivo(arq,content);
    printf("Arquivo criado...\n");
    return 0;
}