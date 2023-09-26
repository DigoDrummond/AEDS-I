/*
Data:24/05/2023
Lista exercícios, Assunto:Vetores
Ex: 2.4 , MAIOR E MENOR E INDICES
Aluno: Rodrigo Drummond Macedo. RA:802742
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void leVetor(float v[], int n);
float calcMedia (float v[], int n);
float retMaior (float v[], int n, int *idxmaior);
float retMenor (float v[], int n, int *idxmenor);
void imprimeVetor(float v[], int n);
void imprimeResultados(float media, float maior, int idxmaior, float menor, int idxmenor);


int main()
{
    setlocale(LC_ALL, "");
    int n,idxmaior,idxmenor;
    float media, maior, menor;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    float v[n];
    leVetor(v,n);
    printf("\nElementos do Vetor Original");
    imprimeVetor(v,n);
    maior=retMaior(v,n,&idxmaior);
    menor=retMenor(v,n,&idxmenor);
    media=calcMedia(v,n);
    imprimeResultados(media,maior,idxmaior,menor,idxmenor);
}
void leVetor(float v[], int n){
  for(int i=0;i<n;i++){
    printf("Digite o valor %d/%d: ",i+1,n);
    scanf("%f",&v[i]);
  }
}
void imprimeVetor(float v[], int n){
   for(int i=0;i<n;i++)
     printf(" %f ", v[i]);
}
float calcMedia(float v[], int n){
 float soma=0;
    for(int i=0;i<n;i++){
        soma += v[i];
    }
    return soma/n;
}
float retMaior(float v[], int n, int *idxmaior){
     float maior = v[0];
     *idxmaior = v[0];
     for(int i=1; i<n; i++){
        if (v[i] > maior){
            maior = v[i];
            *idxmaior = i;
        }
     }
      return maior;
}
float retMenor(float v[], int n, int *idxmenor){
   float menor = v[0];
   *idxmenor = v[0];
   for(int i=1;i<n;i++){
    if (v[i] < menor){
            menor = v[i];
            *idxmenor = i;
        }
   }
    return menor;
}
void imprimeResultados(float media, float maior, int idxmaior, float menor, int idxmenor){
    printf("\n Maior indice = %d.\n Maior valor = %f. \n Menor indice = %d. \n Menor valor = %f",idxmaior,maior,idxmenor,menor);
    printf("\n A media é de %f ", media);
}
