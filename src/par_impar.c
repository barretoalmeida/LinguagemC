#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int n;
    printf("Digitar um número inteiro e tecle enter\n");
    scanf("%d",&n);
    if ( n % 2 == 0){
        printf("O número %d que você digitou é Par\n",n);
    }
    else{
        printf("O número %d que você digitou e Impar\n",n);
    }
    return 0;
}