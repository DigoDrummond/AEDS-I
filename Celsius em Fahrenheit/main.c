
//RODRIGO DRUMMOND MACEDO
//09/04/2023
//MATR�CULA:802742
// EXERCICIO AEDS CALCULADORA
//TURMA 2740102
//AEDS
//PUC MINAS PRA�A DA LIBERDADE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Prot�tipos
float fEmC(float f);
float cEmF(float f);

int main(){
    setlocale(LC_ALL, "Portuguese");

  float temperatura, convertida, operacao;


    printf("Para converter fahrenheit em celsius digite 0, e para converter celsius em fahrenheit digite 1");
    printf("\nDigite a opera��o desejada: ");
    scanf("%f", &operacao);
    printf("\nDigite a temperatura: ");
    scanf("%f", &temperatura);
    if(operacao==0){

        convertida=fEmC(temperatura);
        printf("A temperatura em celsius �:%f ",convertida);
    }
    else if(operacao==1){
        convertida = cEmF(temperatura);
    printf("A temperatura em fahrenheit �:%f ",convertida);
    }
    else
        printf("opera��o inv�lida");
}
float fEmC(float f){
     return (f - 32) * 5 / 9 ;
}
float cEmF(float c){
    return ((c * 9) / 5) + 32 ;
}
