#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct estudante{
    char nome[50];
    int idade;
    char serie[10];
};


int main(){
    system("clear");
    //vamos fazer uma represntação da estrutura do estudante, que e algo parecido com declaração de varialvel, para ter acesso aos dados do estutante.
    struct estudante estu;
    estu.idade = 25;
    strcpy (estu.nome,  "Márcia");
    strcpy (estu.serie , "1ºTM");

    printf("O estudante tem %d anos\n",estu.idade);
    printf("O nome do estudante é %s\n",estu.nome);
    printf("A série do estudante é %s\n",estu.serie);

    return 0;

}