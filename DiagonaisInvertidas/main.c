/*
Data:24/05/2023
Lista exercícios, Assunto:MATRIZES
Ex: 2.8, DIAGONAIS INVERTIDAS
Aluno: Rodrigo Drummond Macedo. RA:802742
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
const int n=4;
void leMatriz(int mat[][n], int m);
void imprimeMatriz(int mat[][n], int m);
void diagonaisInv(int mat[][n], int matInv[][n], int m);

int main(){
    setlocale(LC_ALL, "");
    int m;
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &m);
    int matriz[m][n];
    leMatriz(matriz,m);
    printf("\nMatriz original: \n");
    imprimeMatriz(matriz,m);
    int diagInvertida[m][n];
    diagonaisInv(matriz,diagInvertida,m);
    printf("\nMatriz com diagonais invertidas: \n");
    imprimeMatriz(diagInvertida,m);
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
void diagonaisInv(int mat[][n], int matInv[][n], int m){
 for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            if (i + j == n - 1)
                matInv[i][j] = mat[m-1-i][j];
             else if (i == j)
                matInv[i][j]=mat[i][n-1-j];
             else
                matInv[i][j] = mat[i][j];

        }
    }
}
