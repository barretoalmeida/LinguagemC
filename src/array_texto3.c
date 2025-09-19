#include <stdio.h>
#include <stdlib.h>

int main(){

    system("clear");
    char nome[10];
    char sobrenome[10];
    char sobrenome2[10];
    printf("Digite o seu nome\n");
    scanf("%s",nome);
    // Quando se tiver que escrever o nome e sobrenome tem que colocar dois scanf 
    printf("Digite o seu sobrenome\n");
    scanf("%s %s",sobrenome ,sobrenome2);

    printf("Olá, %s %s %s \n",nome ,sobrenome ,sobrenome2);

    return 0;
}
