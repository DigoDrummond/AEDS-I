/*
Data:24/05/2023
Lista exercícios, Assunto:MATRIZES
Ex: 2.7, MAIORES ELEMENTOS DAS LINHAS E MENORES DAS COLUNAS
Aluno: Rodrigo Drummond Macedo. RA:802742
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
const int n=4;
void leMatriz(int mat[][n], int m);
void imprimeMatriz(int mat[][n], int m);
void maiorLinha(int mat[][n],int maiorL[],int m) ;
void menorColuna(int mat[][n],int menorC[],int m) ;
int main()
{
    setlocale(LC_ALL, "");
    int m;
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &m);
    int matriz[m][n];
    leMatriz(matriz,m);
    printf("\nMatriz original: \n");
    imprimeMatriz(matriz,m);
    int maiorL[m];
    int menorC[n];
    maiorLinha(matriz,maiorL,m);
    menorColuna(matriz,menorC,m);
    printf("\nMaior elemento de cada linha: ");
     for(int i=0;i<m;i++)
        printf("\nLinha %d: %d",i,maiorL[i]);
    printf("\nMenor elemento de cada coluna:\n");
    for (int j=0;j<n;j++)
        printf("\nColuna %d: %d",j, menorC[j]);
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
void maiorLinha(int mat[][n],int maiorL[],int m){
 int maior;
  for(int i=0;i<m;i++){
    maior = mat[i][0];
    for(int j=0;j<n;j++){
        if(mat[i][j]>maior)
            maior = mat[i][j];
    }
    maiorL[i] = maior;
  }

}
void menorColuna(int mat[][n],int menorC[],int m){
    int menor;
    for (int j=0;j<n;j++){
      menor = mat[0][j];
        for (int i=1;i<m;i++){
            if (mat[i][j]<menor){
                menor = mat[i][j];
            }
        }
        menorC[j] = menor;
    }
}
