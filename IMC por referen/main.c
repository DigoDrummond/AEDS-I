#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
    /* Protótipos das funções */
void entrada(float *,float *);
float calculaIMC(float peso, float altura);
void exibeClassificacaoIMC(float imc);
void exibeTabelaIMC();
bool validaEntrada(float peso, float altura);

  /* Função principal */
int main() {
      setlocale(LC_ALL, "Portuguese");
    float peso, altura, imc;
    bool val;
     entrada(&peso,&altura); //colocar & ao chamar a função com ponteiro
    val=validaEntrada(peso,altura);
      if(!val){
        printf("Entrada inválida\n");
          return 1;
      }
    imc = calculaIMC(peso, altura);
    printf("Seu IMC é: %f \n", imc);
    exibeClassificacaoIMC(imc);
    exibeTabelaIMC();

    return 0;
}

/* Implementações das funções */
float calculaIMC(float peso, float altura) {
    return peso / (pow(altura,2));
}

void exibeClassificacaoIMC(float imc) {
    if (imc < 18.5) {
        printf("Abaixo do peso.\n");
    } else if (imc < 25) {
        printf("Peso normal.\n");
    } else if (imc < 30) {
        printf("Sobrepeso.\n");
    } else if (imc < 35) {
        printf("Obesidade grau 1.\n");
    } else if (imc < 40) {
        printf("Obesidade grau 2.\n");
    } else {
        printf("Obesidade grau 3.\n");
    }
}

void exibeTabelaIMC() {
    printf("Tabela de classificação do IMC:\n");
    printf("Menor que 18.5: abaixo do peso.\n");
    printf("Entre 18.5 e 24.9: peso normal.\n");
    printf("Entre 25 e 29.9: sobrepeso.\n");
    printf("Entre 30 e 34.9: obesidade grau 1.\n");
    printf("Entre 35 e 39.9: obesidade grau 2.\n");
    printf("Maior ou igual a 40: obesidade grau 3.\n");
}
bool validaEntrada(float peso,float altura){
   if(peso<=0 || altura<=0)
        return false;
         return true;
}
void entrada(float *peso,float *altura){
   printf("Digite o peso: ");
   scanf("%f", peso);//& não é necessário pois * ja armazena valor
   printf("Digite a altura: ");
   scanf("%f", altura);
}


















