/*
Data:24/05/2023
Lista exercícios, Assunto:Vetores
Ex: 2.13, DADOS ESTATÍSTICOS
Aluno: Rodrigo Drummond Macedo. RA:802742
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void leVetor(float v[], int n);
void imprimirVetor(float v[], int n);
float calculaMedia(float v[], int n);
float calculaDesvioPadrao(float v[], float media, int n);
int main()
{
    setlocale(LC_ALL, "");
   int n;
   float media,desvioPadrao;
   printf("Digite a quantidade de dias: ");
   scanf("%d", &n);
   float temperaturas[n];
   leVetor(temperaturas,n);
   printf("\nTemperaturas digitadas: ");
   imprimirVetor(temperaturas,n);
   media=calculaMedia(temperaturas,n);
   desvioPadrao=calculaDesvioPadrao(temperaturas,media,n);
   printf("\nA média das temperaturas é %f",media);
   printf("\nO desvio padrão é %f",desvioPadrao);


    return 0;
}
void leVetor(float v[], int n){
 for(int i=0;i<n;i++){
    printf("\nDigite a temperatura %d/%d: ", i+1,n);
    scanf("%f", &v[i]);
 }
}
void imprimirVetor(float v[], int n){
    for(int i=0;i<n;i++)
      printf(" %f ",v[i]);
}
float calculaMedia(float v[], int n){
   float soma=0;
   for(int i=0;i<n;i++){
     soma+=v[i];
   }
   return soma/n;
}
float calculaDesvioPadrao(float v[], float media, int n){
   float soma=0, variancia;
   for(int i=0;i<n;i++)
      soma+=pow(v[i]-media,2);
      variancia=sqrt(soma/(n-1));
   return variancia;
}
