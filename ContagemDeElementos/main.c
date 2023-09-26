/*
Data:24/05/2023
Lista exercícios, Assunto:Vetores
Ex: 2.5 , CONTAGEM DE ELEMENTOS
Aluno: Rodrigo Drummond Macedo. RA:802742
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void leVetor(float v[], int n);
void imprimeVetor(float v[], int n);
float contaImpares(float v[], int n);
float contaPares(float v[], int n);

int main(){
    setlocale(LC_ALL, "");
    int n,contImpar,contPar;
    printf("Digite o tamanho do Vetor(deve ser par): ");
    scanf("%d", &n);
    if(n % 2 != 0){
        printf("\nO tamanho do vetor deve ser par!");
    }
    float v[n];
    leVetor(v,n);
    printf("\nElementos do Vetor Original!");
    imprimeVetor(v,n);
    contImpar=contaImpares(v,n);
    contPar=contaPares(v,n);
    printf("\nQuantidade de elementos impares na primeira metade do vetor: %d\n", contImpar);
    printf("\nQuantidade de elementos pares na segunda metade do vetor: %d\n", contPar);
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
float contaImpares(float v[], int n){
    int contador = 0;
    for(int i=0;i<n/2;i++){
        if((int)v[i] % 2 != 0)
            contador++;
    }
    return contador;
}
float contaPares(float v[], int n){
    int contador = 0;
    for(int i=n/2;i<n;i++){
        if((int)v[i] % 2 == 0)
            contador++;
    }
     return contador;
}
