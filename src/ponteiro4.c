#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    FILE *arquivo; 
    arquivo = fopen("texto.txt", "a"); // 'a ' de adicionar
    fprintf(arquivo,"Sexta-feira");
    fclose(arquivo);
    return 0;
}