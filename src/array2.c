#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear"); 
    // fetores
    int valores[7] = {10,56,30,10,1,47,59};
    int menor = valores[0];
    // comparação de valores 
    for(int i = 1 ; i <= 6; i++){
        if(valores[i] < menor){
            menor = valores[i];
        }
    }
    printf("O menor valor é %d\n",menor);
    return 0;
}