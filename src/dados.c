#include <stdio.h>
#include <stdlib.h>
#include "../lib/dados.h"

int main(){
    system("clear");

    char name[100];
    char email[200];
    char *ano;
    char *idade;
   

    printf("Digite o seu nome e tecle Enter\n");
    fgets(name,100,stdin);

    getchar();

    printf("Digite o seu e-mail e tecle Enter\n");
    fgets(email,200,stdin);

    printf("Digite o ano do seu nascimento tecle Enter\n");
    scanf("%d", ano);

    idade = 2025 - *ano;

    printf("a sua idade é %d ",idade);

    dados(name,email,name,ano);
    printf("Arquivo criado...\n");

    return 0;
}


