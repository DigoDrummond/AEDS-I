/*
Data:24/05/2023
Lista exercícios, Assunto:Vetores
Ex: 2.7, JUNÇÃO DE VETORES
Aluno: Rodrigo Drummond Macedo. RA:802742
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void leVetor(float v[], int n);
void imprimeVetor(float v[], int n);
void juntaVetores(float vA[], int n1, float vB[], int n2, float vC[], int n3,float vD[]);

int main()
{
    setlocale(LC_ALL, "");
    int n1,n2,n3;
    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &n1);
    printf("\nDigite o tamanho do segundo vetor: ");
    scanf("%d", &n2);
    printf("\nDigite o tamanho do terceiro vetor: ");
    scanf("%d", &n3);
    float vA[n1],vB[n2],vC[n3],vD[n1+n2+n3];
    printf("\nDigite os elementos do vetor A: ");
    leVetor(vA,n1);
    printf("\nDigite os elementos do vetor B: ");
    leVetor(vB,n2);
    printf("\nDigite os elementos do vetor C: ");
    leVetor(vC,n3);
    juntaVetores(vA,n1,vB,n2,vC,n3,vD);
    printf("\nVetor A:");
    imprimeVetor(vA,n1);
    printf("\nVetor B:");
    imprimeVetor(vB,n2);
    printf("\nVetor C:");
    imprimeVetor(vC,n3);
    printf("\nVetor D(junção de A,B e C):");
    imprimeVetor(vD, n1+n2+n3);
    return 0;
}
void leVetor(float v[], int n){
  for(int i=0;i<n;i++){
    printf("\nDigite o valor %d/%d: ",i+1,n);
    scanf("%f",&v[i]);
  }
}
void imprimeVetor(float v[], int n){
   for(int i=0;i<n;i++)
     printf(" %f ", v[i]);
}
void juntaVetores(float vA[], int n1, float vB[], int n2, float vC[], int n3,float vD[]){
    int n4 = 0;
    for(int i=0;i<n1;i++){
        vD[n4++]=vA[i];
    }
    for(int i=0;i<n2;i++){
        vD[n4++]=vB[i];
    }
    for(int i=0;i<n3;i++){
        vD[n4++]=vC[i];
    }
}
