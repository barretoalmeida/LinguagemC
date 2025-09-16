#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear"); 
    // fetores
    int valores[7] = {10,56,30,13,1,47,59};
    int numeros[5] = {3,10,4,77,47};
    int igual = valores [0];
    int mesmo = numeros[0];

    for(int i = 0 ; i <= 6 ; i++){
    
        for(int j = 0 ; j <= 4 ; j++){
            if(numeros[j]==valores[i]){
                printf("%d\n",numeros[j]);

            }
        }
    }
    printf("Os numéros iguais são\n ");
    return 0;
}
    