// Incluir a biblioteca padão de entrada e saída de dados (stdio.h)
#include <stdio.h>

int main(){
    int numero1, numero2;
    int soma, subtrair, multiplicar, dividir, resto;
    
    printf("Digitar o primeiro número inteiro e tecle enter:\n");
    scanf("%d" ,&numero1);

    printf("Digite o segundo número inteiro e tecle enter:\n");
    scanf("%d" ,&numero2);

    soma = numero1 + numero2;
    subtrair = numero1 - numero2;
    multiplicar = numero1 * numero2;
    dividir = numero1 / numero2;
    resto = numero1 % numero2;
    printf("O resuldado da soma é %d\n" ,soma);
    printf("O resuldado da subtração é %d\n" ,subtrair);
    printf("O resuldado da multiplicação é %d\n" ,multiplicar);
    printf("O resuldado da divisão é %d\n" ,dividir);
    printf("O resuldado da resto é %d\n" ,resto);

    return 0;

}