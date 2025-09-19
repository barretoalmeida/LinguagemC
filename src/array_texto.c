#include <stdio.h>
#include <stdlib.h>

int main(){

    system("clear");
    char nome[4] = {"Joao"};
    printf("%s\n",nome);//quando se utiliza o %s e string (mostrar) ao inves do caracter %c.
    printf("%c\n",nome[0]);//o %c so para pegar um caracter (exemplo: so a letra J etc.)

    return 0;
}
// scanf pode ser utilizado para ler o que o usuario escreveu, mas não e recomendado