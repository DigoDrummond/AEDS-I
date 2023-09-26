/*
Data:24/05/2023
Lista exercícios, Assunto:MATRIZES
Ex: 2.3, MATRIZ IDENTIDADE
Aluno: Rodrigo Drummond Macedo. RA:802742
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
const int n=4, m=4;
void identidade(int mat[m][n], int matId[m][n]);
void leMatriz(int mat[m][n]);
void imprimeMatriz(int mat[m][n]);
//11 12 13 14  21 22 23 24  31 32 33 34  41 42 43 44
int main(){
    int mat[m][n];
    int matId[m][n];
    leMatriz(mat);
    printf("\nElementos da matriz original!\n");
    imprimeMatriz(mat);
    identidade(mat, matId);
    printf("Matriz Identidade:\n");
    imprimeMatriz(matId);
}
void identidade(int mat[m][n], int matId[m][n]) {
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if (i == j)
                matId[i][j] = 1;
            else
                matId[i][j] = 0;
        }
    }
}
void leMatriz(int mat[m][n]){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Digite[%d][%d]: ",i,j);
            scanf("%d", &mat[i][j]);
        }
    }
}
void imprimeMatriz(int mat[m][n]){
 for (int i=0;i<m;i++) {
        for (int j=0; j<n;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

