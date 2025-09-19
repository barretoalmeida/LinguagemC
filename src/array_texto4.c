#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");

    char nome_completo[50];
    printf("Digite o seu nome\n");
    fgets(nome_completo,50,stdin);//stdin: std in de entrar
    printf("Olá, %s\n",nome_completo);

    return 0;
}