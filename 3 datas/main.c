//RODRIGO DRUMMOND MACEDO
//09/04/2023
//MATRÍCULA:802742
// EXERCICIO AEDS CALCULADORA
//TURMA 2740102
//AEDS
//PUC MINAS PRAÇA DA LIBERDADE

#include <stdio.h>
#include <stdlib.h>

//prototipos
int numDias1(int dia1,int mes1,int ano1);
int numDias2(int dia2,int mes2,int ano2);
int numDias3(int dia3,int mes3,int ano3);
int colocaOrdem(int data1,int data2,int data3);


int main(){
    int dia1,dia2,dia3,mes1,mes2,mes3,ano1,ano2,ano3,n1,n2,n3;
    printf("Digite a primeira data: ");
    scanf("%d %d %d", &dia1,&mes1,&ano1);
    printf("Digite a segunda data: ");
    scanf("%d %d %d", &dia2,&mes2,&ano2);
    printf("Digite a terceira data: ");
    scanf("%d %d %d", &dia3,&mes3,&ano3);
     n1=numDias1(dia1,mes1,ano1);
     n2=numDias2(dia2,mes2,ano2);
     n3=numDias3(dia3,mes3,ano3);
       if(n3 > n2 && n3 > n1 ){
        if(n2>n1){
            printf(" %d/%d/%d  %d/%d/%d  %d/%d/%d",dia1,mes1,ano1,dia2,mes2,ano2,dia3,mes3,ano3);
        }else
            printf("%d/%d/%d  %d/%d/%d  %d/%d/%d",dia2,mes2,ano2,dia1,mes1,ano1,dia3,mes3,ano3);
       }
       if (n1 >n2 && n1 > n3){
        if(n3>n2){
            printf("%d/%d/%d  %d/%d/%d  %d/%d/%d",dia2,mes2,ano2,dia3,mes3,ano3,dia1,mes1,ano1);
        }else
            printf("%d/%d/%d  %d/%d/%d  %d/%d/%d",dia3,mes3,ano3,dia2,mes2,ano2,dia1,mes1,ano1);
       }
       if(n2 > n1 && n2 >n3){
        if(n1>n3){
            printf("%d/%d/%d  %d/%d/%d  %d/%d/%d",dia3,mes3,ano3,dia1,mes1,ano1,dia2,mes2,ano2);
        }else
            printf("%d/%d/%d  %d/%d/%d  %d/%d/%d",dia1,mes1,ano1,dia3,mes3,ano3,dia2,mes2,ano2);
       }
}
int numDias1(int dia1,int mes1,int ano1){
      return dia1 + (mes1 * 30) + (ano1 * 365);
}
int numDias2(int dia2,int mes2,int ano2){
      return dia2 + (mes2 * 30) + (ano2 * 365);
}
int numDias3(int dia3,int mes3,int ano3){
      return dia3 + (mes3 * 30) + (ano3 * 365);
}

