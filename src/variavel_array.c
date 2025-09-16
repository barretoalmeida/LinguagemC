#include <stdlib.h>
#include <stdio.h>

int main(){
    system("clear");
    int nota1 = 10;
    int nota2 = 6;
    int nota3 = 8;
    // esse o array
    int notas[3] = {10,6,8};

    printf("O nota é %d - posição em memória %p\n",nota1,&nota1);
    printf("O nota é %d - posição em memória %p\n",nota2,&nota2);
    printf("O nota é %d - posição em memória %p\n",nota3,&nota3);
    printf("\n------------------------------------------------\n");
    printf("A primeira nota é %d - posição de memória %p\n",notas[0],&notas[0]);
    printf("A primeira nota é %d - posição de memória %p\n",notas[1],&notas[1]);
    // esse é os array que tem que colocar printf.
    printf("A primeira nota é %d - posição de memória %p\n",notas[2],&notas[2]);

    return 0;
}