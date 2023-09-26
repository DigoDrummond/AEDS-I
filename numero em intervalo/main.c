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
  float dentroIntervalo(float inicioIntervalo, float fimIntervalo, float num);
  float verifica_intervalo(float ini, float fim);
int main(){
    setlocale(LC_ALL, "Portuguese");
    float inicioIntervalo,fimIntervalo,n;
    int res_val,intervalo;
    printf("digite o intervalo: ");
    scanf("%f %f",&inicioIntervalo,&fimIntervalo);
    printf("Digite um número para saber se ele está no intervalo anterior: ");
    scanf("%f",&n);

   intervalo=verifica_intervalo(inicioIntervalo,fimIntervalo);
   if(intervalo==1){
    printf("O primeiro número digitado deve ser menor que o segundo\n");
   }
      res_val=dentroIntervalo(inicioIntervalo,fimIntervalo,n);
      if(res_val==1)
        {
        printf("O número está dentro do intervalo");
        return 1;
        } else
          printf("O número não está no intervalo");
          return 0;
    }


float dentroIntervalo(float inicioIntervalo, float fimIntervalo, float num){
     if(num>= inicioIntervalo && num<=fimIntervalo){
        return 1;
         return 0;
     }

}
float verifica_intervalo(float ini, float fim){
    if(fim<ini){
        return 1;
    }
    }

