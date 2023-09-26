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
#include <math.h>
 float calculaDelta(float a,float b,float c);
 float calculaRaizes(float a,float b,float c);

int main(){
    setlocale(LC_ALL, "Portuguese");
    float a,b,c;
    int delta;

        printf("Digite a: ");
        scanf("%f", &a);
        printf("Digite b: ");
        scanf("%f", &b);
        printf("Digite c: ");
        scanf("%f", &c);

         delta=calculaDelta(a,b,c);

         calculaRaizes(a,b,c);


}
 float calculaDelta(float a,float b,float c){
      return (b*b)-4(a*c);
 }
 float calculaRaizes(float a,float b,float c){
     int del;
     float x1,x2;
     del=calculaDelta(a,b,c);
     x1= (-b + sqrt(del))/2*a;
     x2= (-b - sqrt(del))/2*a;
     printf("As raízes são %f e %f ",x2,x1);
 }
