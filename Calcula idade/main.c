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
int calcula_dia(int dia);
int calcula_mes(int mes);
int calcula_ano(int ano);


int main(){
    setlocale(LC_ALL ,"Portuguese");
    int dia,mes,ano,idadeDia,idadeMes,idadeAno;
     printf("Digite sua data de nascimento somente usando n�meros: ");
     scanf("%d %d %d",&dia,&mes,&ano);
     idadeDia=calcula_dia(dia);
     idadeMes=calcula_mes(mes);
     idadeAno=calcula_ano(ano);
     printf("Sua idade � de %d anos, %d meses e %d dias",idadeAno,idadeMes,idadeDia);



}
int calcula_dia(int dia){
    int dAtual=31;
         return 31-dia;
}
int calcula_mes(int mes){
    int mAtual=12;
         return 12-mes;
}
int calcula_ano(int ano) {
    int aAtual=2019;
    return 2019-ano;
}
