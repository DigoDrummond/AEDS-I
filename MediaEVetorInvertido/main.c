/*
Data:24/05/2023
Lista exercícios, Assunto:Vetores
Ex: 2.3 , MÉDIA
Aluno: Rodrigo Drummond Macedo. RA:802742
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void lerVetor(float v[], int n);
void imprimeVetor(float v[], int n);
void imprimeVetorInvertido(float v[], int n);
float calcMedia(float v[], int n);

int main()
{
    setlocale(LC_ALL, "");
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    float v[n],media;
    lerVetor(v,n);
    printf("\nElementos do Vetor Original");
    imprimeVetor(v,n);
    media=calcMedia(v,n);
    printf("\nMédia dos Elementos do Vetor : %f",media);
    printf("\nElementos do Vetor Invertidos");
    imprimeVetorInvertido(v,n);
}

void lerVetor(float v[], int n){
   for (int i=0; i<n; i++){
    printf("Digite o número %d/%d: ",i+1,n);
    scanf("%f", &v[i]);
   }
}
void imprimeVetor(float v[], int n){
   for (int i=0;i<n;i++){
    printf(" %f ",v[i]);
   }
}
void imprimeVetorInvertido(float v[], int n){
  for(int i=n-1;i>=0;i--){
    printf(" %f ", v[i]);
  }
}
float calcMedia(float v[], int n){
   float media,soma=0;
   for(int i=0;i<n;i++){
    soma += v[i];
    media = soma/n;
   }
   return media;
   }

