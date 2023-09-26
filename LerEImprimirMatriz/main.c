/*
Data:24/05/2023
Lista exercícios, Assunto:MATRIZES
Ex: 2.1, LER E IMPRIMIR VETOR
Aluno: Rodrigo Drummond Macedo. RA:802742
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
const int n=4;
void leMatriz(int mat[][n], int m);
void imprimeMatriz(int mat[][n], int m);
int main(){
    setlocale(LC_ALL, "");
    int m;
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &m);
    int mat[m][n];
    leMatriz(mat,m);
    imprimeMatriz(mat,m);
}
void leMatriz(int mat[][n], int m){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Digite[%d][%d]: ",i,j);
            scanf("%d", &mat[i][j]);
        }
    }
}
void imprimeMatriz(int mat[][n], int m){
 for (int i=0;i<m;i++) {
        for (int j=0; j<n;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
