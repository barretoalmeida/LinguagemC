#include <stdio.h>
#include <stdlib.h>

int main(){
    int placa;
    //vamos limpar a tela do terminal
    system("clear");
    printf("Digitar o número final da placa do veículo\n");
    scanf("%d",&placa);

    // o || e ou 
    if(placa == 1 || placa == 2 ){
        printf("Rodizio na segunda-feira. Não pode circular\n");
    }
    else if(placa == 3 || placa == 4 ){
        printf("Rodizio na terça-freira. Não pode circular\n");
    }
    else if(placa == 5 || placa == 6){
        printf("Rodizio na quarda-feira. Não pode circular\n");
    }
    else if(placa == 7 || placa == 8){
        printf("Rodizio na quinta-feira. Não pode circular\n");
    }
    else if(placa == 9 || placa == 0){
        printf("Rodizio na sexta-feira. Não pode circular\n");
    }
    else{
        printf("Final de placa inválido!\n");
    }

    return 0;
    
}