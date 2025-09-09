#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int n;
    printf("Digitar qualquer ano é tecle enter\n");
    scanf("%d",&n);
    if ( n % 4 == 0){
        printf("O ano %d que você digitou é bissexto\n",n);
    }
    else{
        printf("O ano %d que você não é bissexto\n",n);
    }
    return 0;
}