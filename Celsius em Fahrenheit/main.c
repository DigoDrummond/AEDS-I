
//RODRIGO DRUMMOND MACEDO
//09/04/2023
//MATRÍCULA:802742
// EXERCICIO AEDS CALCULADORA
//TURMA 2740102
//AEDS
//PUC MINAS PRAÇA DA LIBERDADE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Protótipos
float fEmC(float f);
float cEmF(float f);

int main(){
    setlocale(LC_ALL, "Portuguese");

  float temperatura, convertida, operacao;


    printf("Para converter fahrenheit em celsius digite 0, e para converter celsius em fahrenheit digite 1");
    printf("\nDigite a operação desejada: ");
    scanf("%f", &operacao);
    printf("\nDigite a temperatura: ");
    scanf("%f", &temperatura);
    if(operacao==0){

        convertida=fEmC(temperatura);
        printf("A temperatura em celsius é:%f ",convertida);
    }
    else if(operacao==1){
        convertida = cEmF(temperatura);
    printf("A temperatura em fahrenheit é:%f ",convertida);
    }
    else
        printf("operação inválida");
}
float fEmC(float f){
     return (f - 32) * 5 / 9 ;
}
float cEmF(float c){
    return ((c * 9) / 5) + 32 ;
}
