/*
Data:24/05/2023
Lista exercícios, Assunto:Vetores
Ex: 2.14, CONJUNTOS
Aluno: Rodrigo Drummond Macedo. RA:802742
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void leVetor(int v[], int n);
void imprimeVetor(int v[], int n);
void intersecao(int v1[], int v2[], int vi[], int n, int *qtde);
void uniao(int v1[], int v2[], int vu[], int n, int *qtde);
void diferenca(int v1[], int v2[], int vd[], int n, int *qtde);

int main() {
    setlocale(LC_ALL, "");
    int n;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);
    int v1[n], v2[n];
    printf("Digite os elementos do primeiro vetor:\n");
    leVetor(v1,n);
    printf("Digite os elementos do segundo vetor:\n");
    leVetor(v2,n);
    int vi[n],vu[2*n],vd[n];
    int qtdeIntersecao,qtdeUniao,qtdeDiferenca;
    intersecao(v1,v2,vi,n,&qtdeIntersecao);
    uniao(v1, v2,vu,n,&qtdeUniao);
    diferenca(v1,v2,vd,n,&qtdeDiferenca);
    printf("\nVetor Interseção: ");
    imprimeVetor(vi,qtdeIntersecao);
    printf("\nVetor União: ");
    imprimeVetor(vu,qtdeUniao);
    printf("\nVetor Diferença: ");
    imprimeVetor(vd,qtdeDiferenca);
    return 0;
}

void leVetor(int v[], int n){
    for (int i=0;i<n;i++){
        printf("Digite %d/%d: ", i+1,n);
        scanf("%d", &v[i]);
    }
}

void imprimeVetor(int v[], int n){
    for (int i=0;i<n;i++)
        printf("%d ", v[i]);
}

void intersecao(int v1[], int v2[], int vi[], int n, int *qtde){
    *qtde = 0;
    for (int i=0; i<n;i++){
        int elemento = v1[i];
        int encontrado = 0;
        for (int j=0;j<n;j++){
            if (elemento == v2[j]){
                encontrado = 1;
                break;
            }
        }
        if (encontrado) {
            vi[*qtde] = elemento;
            (*qtde)++;
        }
    }
}

void uniao(int v1[], int v2[], int vu[], int n, int *qtde){
    *qtde = 0;
    for (int i = 0; i < n; i++){
        int elemento = v1[i];
        int encontrado = 0;
        for (int j = 0; j < *qtde; j++){
            if (elemento == vu[j]) {
                encontrado = 1;
                break;
            }
        }
        if(!encontrado){
            vu[*qtde] = elemento;
            (*qtde)++;
        }
    }
    for(int i=0;i<n;i++){
        int elemento = v2[i];
                int encontrado = 0;
        for(int j=0;j<*qtde;j++){
            if(elemento == vu[j]){
                encontrado = 1;
                break;
            }
        }
        if(!encontrado) {
            vu[*qtde] = elemento;
            (*qtde)++;
        }
    }
}

void diferenca(int v1[], int v2[], int vd[], int n, int *qtde){
    *qtde = 0;
    for (int i=0;i<n;i++){
        int elemento = v1[i];
        int encontrado = 0;
        for(int j = 0;j<n;j++){
            if(elemento == v2[j]){
                encontrado = 1;
                break;
            }
        }
        if(!encontrado){
            vd[*qtde]=elemento;
            (*qtde)++;
        }
    }
}

