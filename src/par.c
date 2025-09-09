#include <stdio.h>
// Utilizaremos a biblioteca stdlib que guarda os comandos de limpar a tela e pause 
#include <stdlib.h>

int main(){
    // comando para limpar a tela linux 
    system("clear");
    int n;
    printf("Digitar um número interiro e tecle enter\n");
    scanf("%d",&n);
    //se o valor digitado pelo o usuario dividido por 2 e rester zero (0), emtão este valor e Par
    if( n % 2 == 0){
        printf("O número %d que você digitou é Par\n",n);
    }
    return 0;
}