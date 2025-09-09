// este programa pede para o usuario dois numeros e,
// realiza a soma entre eles e ao final exibe o resultado

#include <stdio.h>
int main(){
    //declarar as variaves que irão receber
    // os numeros digitados pelo usuarios
    int numero1;
    int numero2;
    int resultado;
    // Vamos pedir ao usuario entra com primeiro valor
    printf("Digite em número: \n");
    // capturar o numero digitado pelo úsuario com o comando scanf
    scanf("%d",&numero1);

    printf("Digite outro numero inteiro e tecle Enter:\n");
    scanf("%d",&numero2);

    // Vamos realizar a soma entre os dois número resuntados 1 e 2
    resultado = numero1 + numero2;

    //Apresentar o resultado em tela
    printf("A soma do número %d com o número %d e %d \n", numero1,numero2,resultado);

    return 0;
    
}
