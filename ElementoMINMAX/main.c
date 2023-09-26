
/*
Data:24/05/2023
Lista exercícios, Assunto:MATRIZES
Ex: 2.6, ELEMENTO MINMAX
Aluno: Rodrigo Drummond Macedo. RA:802742
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
const int n=4;
void minMax(int mat[][n],int m,int *linha ,int *coluna);
void leMatriz(int mat[][n], int m);
void imprimeMatriz(int mat[][n], int m);
int main(){
    setlocale(LC_ALL, "");
    int m;
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &m);
    int matriz[m][n];
    leMatriz(matriz,m);
    printf("\nMatriz original: \n");
    imprimeMatriz(matriz,m);
    int linha,coluna;
    minMax(matriz,m,&linha,&coluna);
    printf("\nElemento MINMAX: %d",matriz[linha][coluna]);
    printf("\nÍndices(linha e coluna): %d, %d.",linha,coluna);
    return 0;
}
void leMatriz(int mat[][n], int m){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Digite [%d][%d]: ",i,j);
            scanf("%d", &mat[i][j]);
        }
    }
}
void imprimeMatriz(int mat[][n], int m){
 for (int i=0;i<m;i++) {
        for (int j=0; j<n;j++){
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }
}
void minMax(int mat[][n],int m,int *linha ,int *coluna){
    int menor = mat[0][0];
    int linhaMenor = 0;
    int colunaMenor = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j] < menor){
                menor=mat[i][j];
                linhaMenor=i;
                colunaMenor=j;
            }
        }
    }
    int maior=mat[linhaMenor][0];
    int colunaMaior=0;
    for(int j=0;j<n;j++){
        if(mat[linhaMenor][j] > maior){
           maior =mat[linhaMenor][j];
           colunaMaior=j;
        }
    }
    *linha=linhaMenor;
    *coluna=colunaMaior;
}
