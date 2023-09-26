/*
Data:24/05/2023
Lista exercícios, Assunto:MATRIZES
Ex: 2.5, INVERTE COLUNAS
Aluno: Rodrigo Drummond Macedo. RA:802742
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
const int n=5;
void leMatriz(int mat[][n], int m);
void imprimeMatriz(int mat[][n], int m);
void inverteColuna(float mat[][n], float mati[][n], int m);
int main(){
    srand(time(NULL));
    setlocale(LC_ALL, "");
    int m;
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &m);
    int matriz[m][n];
    int matrizInvertida[m][n];
    leMatriz(matriz,m);
    printf("\nMatriz original: \n");
    imprimeMatriz(matriz,m);
    inverteColuna(matriz,matrizInvertida,m);
    printf("\nMatriz com colunas invertidas: \n");
    imprimeMatriz(matrizInvertida,m);


    return 0;
}
void leMatriz(int mat[][n], int m){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            mat[i][j] = rand() % 130 + 1;
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
void inverteColuna(float mat[][n], float mati[][n], int m){
   for(int i=0;i<m;i++){
     for(int j=0;j<n;j++){
        mati[i][j] = mat[i][n-1-j];
     }
   }
}
