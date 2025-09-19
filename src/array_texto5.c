#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    
    char nome_do_aluno[100];
    printf("Digite o nome completo\n");
    fgets(nome_do_aluno,100,stdin);
    float notas1;
    float notas2;
    float notas3;
    float notas4;
    float resultado;
    float media;

    printf("Digite sua nota de Matematica:\n");
    scanf("%f",&notas1);

    printf("Digite sua nota de Português:\n");
    scanf("%f",&notas2);

    printf("Digite sua nota de Literatura:\n");
    scanf("%f",&notas3);

    printf("Digite sua nota de Física:\n");
    scanf("%f",&notas4);

    resultado = notas1 + notas2 + notas3 + notas4;
    media = resultado /4;

    if(media >= 7){
        printf("%s, você foi passou! Sua nota é: %.2f\n",nome_do_aluno ,media);
    }
    else if(media <= 4){
        printf("%s Você está reprovado. Sua nota é: %.2f \n",nome_do_aluno , media);
    }

    else{
        printf("%s  Você está de recuperação. Vai ter que repetir de ano. Sua nota é: %.2f \n",nome_do_aluno, media);
    }

    return 0;

}