#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void lerVetor(int v[], int n);
void imprimirVetor(int v[], int n);
float media(int v[],int n);
int pesquisa(int v[], int n, int p);
void inverte(int v[], int n);
int main()
{
  setlocale(LC_ALL, "");
   int n,p,r;
   float m;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int v[n];
    lerVetor(v,n);
    printf("\nElementos do vetor original!");
    imprimirVetor(v,n);
    m=media(v,n);
     printf("\nA m�dia dos elementos do vetor � %f",m);
    printf("\nDigite um valor a ser pesquisado no vetor: ");
    scanf("%d", &p);
    r=pesquisa(v,n,p);
    if(r!=-1)
     printf("%d foi encontrado na posi��o %d do vetor",p,r);
    else
     printf("\nO valor n�o foi encontrado! ");
    inverte(v,n);
    printf("\nElementos do vetor invertidos!");
    imprimirVetor(v,n);
    return 0;

}
void lerVetor(int v[], int n){
   for (int i=0; i<n; i++){
    printf("Digite o n�mero %d/%d: ",i+1,n);
    scanf("%d", &v[i]);
   }
}
void imprimirVetor(int v[], int n){
   for (int i=0;i<n;i++){
    printf(" %d ",v[i]);
   }
}
float media(int v[], int n){
   float media,soma=0;
   for(int i=0;i<n;i++){
    soma += v[i];
    media = soma/n;
   }
   return media;
}
int pesquisa(int v[], int n, int p){
   for (int i=0;i<n;i++){
     if(v[i]==p)
        return i;
   }
      return -1;
}
void inverte(int v[], int n){
    int aux[n],i;
      for(i=0;i<n;i++)
        aux[n-1-i] = v[i];
      for(i=0;i<n;i++)
        v[i]= aux[i];
}
