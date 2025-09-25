#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int idade = 18;
    float preco = 59.90;
    char nome[100] = "Roberto Oliveira";
    char nome2[] = {"Roberto Oliveira"};
    _Bool trabalha = true;    

    printf("O tamanho em bytes do tipo int é %d\n", sizeof(int));
    printf("O tamanho em bytes do tipo float é %d\n", sizeof(float));
    printf("O tamanho em bytes do tipo char é %d\n", sizeof(char));
    printf("O tamanho em bytes do tipo _Bool é %d\n", sizeof(_Bool));

    printf("\n--------------------------------------------------------------\n");

    printf("O tamanho em bytes do tipo idade é %d\n", sizeof(idade));
    printf("O tamanho em bytes do tipo preco é %d\n", sizeof(preco));
    printf("O tamanho em bytes do tipo nome %d\n", sizeof(nome));
    printf("O tamanho em bytes do tipo nome2 %d\n", sizeof(nome2));
    printf("O tamanho em bytes do tipo trabalha é %d\n", sizeof(trabalha));


 
    return 0;

}