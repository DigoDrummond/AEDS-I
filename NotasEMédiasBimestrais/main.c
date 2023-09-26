/*
Data:24/05/2023
Lista exercícios, Assunto:MATRIZES
Ex: 2.9, NOTAS E MÉDIAS BIMESTRAIS
Aluno: Rodrigo Drummond Macedo. RA:802742
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
const int n=4,m=9;
void leMatriz(float mat[m][n]);
void imprimeMatriz(float mat[m][n]);
void calculaMediasBimestrais(float mat[m][n]);

//1 2 3 4   5 6 7 8   4 8 3 6   2 4 6 9   1 2 3 4   4 8 2 9   1 3 6 9   9 7 4 2

int main(){
    setlocale(LC_ALL, "");
    float notas[m][n];
    leMatriz(notas);
    calculaMediasBimestrais(notas);
    imprimeMatriz(notas);
    return 0;
}
void leMatriz(float mat[m][n]){
      for(int i=0;i<m-1;i++){ //m-1 pois ultima linha da matriz é reservada
        printf("\nDigite as notas da disciplina %d \n", i+1);
        for(int j=0;j<n;j++){
            do{
                printf("Bimestre %d: ", j + 1);
                scanf("%f", &mat[i][j]);
                if (mat[i][j] < 0 || mat[i][j] > 10) {
                    printf("Nota inválida. Digite uma nota entre 0 e 10.\n");
                }
            }while(mat[i][j] < 0 || mat[i][j] > 10);
        }
      }
}
void calculaMediasBimestrais(float mat[m][n]){
     float soma=0;
      for(int j=0;j<n;j++){
        for(int i=0;i<m-1;i++){
            soma+= mat[i][j];
        }
        mat[m-1][j] = soma/(m-1);
      }
}
void imprimeMatriz(float mat[m][n]){
  for(int i=0;i<m;i++){
    if(i == m-1)//verifica se é a ultima linha
        printf("\nMédia Bimestral: ");
    else
        printf("\nDisciplina %d: ", i+1);
    for(int j=0;j<n;j++){
        printf("%.2f   ", mat[i][j]);
    }
    printf("\n");
  }
}
