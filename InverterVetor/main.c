/*
Data:24/05/2023
Lista exercícios, Assunto:Vetores
Ex: 2.9 , INVERTER VETOR
Aluno: Rodrigo Drummond Macedo. RA:802742
*/
#include <stdio.h>
#include <stdlib.h>
void leVetor(float v[], int n);
void imprimeVetor(float v[], int n);
void inverteVetor(float v[], int n);
int main(){
   int n;
   printf("Digite o tamanho do vetor: ");
   scanf("%d", &n);
   float v[n];
   leVetor(v,n);
   printf("\nElementos do Vetor Original: ");
   imprimeVetor(v,n);
   inverteVetor(v,n);
   printf("\nElementos do Vetor Invertidos: ");
   imprimeVetor(v,n);
}
void leVetor(float v[], int n){
  for(int i=0;i<n;i++){
        printf("Digite o valor %d/%d: ", i+1, n);
        scanf("%f", &v[i]);
  }
}
void imprimeVetor(float v[], int n){
   for(int i=0;i<n;i++)
     printf(" %f ", v[i]);
}
void inverteVetor(float v[], int n){
    int aux[n],i;
      for(i=0;i<n;i++)
        aux[n-1-i] = v[i];
      for(i=0;i<n;i++)
        v[i]= aux[i];
}
