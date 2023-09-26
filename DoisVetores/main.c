#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
bool pesquisa(int v[5],int p);
void intersecao(int a[5], int b[5],int c[5]; int *nc);
void uniao(int a[5], int b[5],int c[10],int *nc);
void lerVetor(int v[5]);
void imprimirVetor(int v[], int n);
void diferenca(int a[5], int b[5], int c[5],int *nc);

int main(){
    setlocale(LC_ALL,  "");
    int a[5],b[5],un[10],in[5],di[5],nun,nin,ndi;
    printf("Digite os valores do primeiro conjunto");
    lerVetor(a);
    printf("\nDigite os valores do segundo conjunto(valores diferentes");
    lerVetor(b);
    intersecao(a,b,in,nin);
    uniao(a,b,un,nun);
    diferenca(a,b,di,ndi);
    cout<<"Conjunto 1"<<endl;
    imprimeVetor(a,5);
    cout<<"Conjunto 2"<<endl;
    imprimeVetor(b,5);
    printf("\nO resultado da interseção");
    imprimeVetor(in,nin);
    printf("\nO resultado da união");
    imprimeVetor(un,nun);
    printf("\no resultado da diferença");
    imprimeVetor(di,ndi);
    return 0

}
void lerVetor(int v[5]){
  for(int i=0;i<5;i++){
    printf("Digite um número: ");
    scanf("%d", &v[i]);
  }
}
void imprimirVetor(int v[],int n){
   for(int i=0;i<n;i++){
    printf(" %d ",v[i]);
   }
}
bool pesquisa(int v[5],int p){
   for (int i=0;i<5;i++){
    if(v[i]== p )
      return true;
   }
    return false;
}
void intersecao(int a[5], int b[5], int c[5],int *nc){
   bool resp;
   nc=0;
   for(int i=0;i<5;i++){
    resp=pesquisa(a,b[i]);
    if(resp==true){
        c[nc]=b[i];
        nc++;
    }
   }
}
void uniao(int a[5], int b[5],int c[10], int *nc){
   bool resp;
   nc=5;
   for(int i=0;i<5;i++){
    c[i]=a[i];
   }
   for(int i=0;i<5;i++){
    resp=pesquisa(a,b[i]);
    if(resp==false){
        c[nc]=b[i];
        nc++;
    }
   }
}
void diferenca(int a[5], int b[5], int c[5],int *nc){
  bool=resp;
  nc=0;
  for(int i=0;i<5;i++){
    resp=pesquisa(b,a[i]);
    if(resp==false){
        c[nc]=a[i];
        nc++;
    }
  }
}
