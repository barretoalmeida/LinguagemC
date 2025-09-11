#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int i, f;   // o i e a variavel inicial, já o f é a variavel é final.
    printf("Digite um ano inicial:\n");
    scanf("%d",&i); // O scanf é o valor incial que o usuario vai digitar.

    printf("Digite o ano final\n");
    scanf("%d",&f); //Esse é o valor final. 

    while (i <= f){
        if ( i % 4 == 0) //aqui dentro faz a subtração ou soma dos valores e descobre se e para dividir para descobrir o valor final 
        printf("Esses anos %d que você digitou são bissexto\n",i);
        i++; //quando colocar {} no if o o++ etc tem que ser fora do if.
        
    }
    return 0;
}