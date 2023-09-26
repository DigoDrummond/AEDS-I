/*
Data:24/05/2023
Lista exercícios, Assunto:Vetores
Ex: 2.2 , Notas Semestrais-Implementação
Aluno: Rodrigo Drummond Macedo. RA:802742
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void lerVetor(float v[], int n);
float somaVetor(float v[], int n);

int main()
{
    int n=5, min_aprov=60;
    float soma;
    float v[n];
    lerVetor(v,n);
    soma=somaVetor(v,n);
    printf("Sua nota no semestre foi %f",soma);
    if(soma>= min_aprov)
        printf("\nAprovado");
    else
        printf("\nReprovado");
}
void lerVetor(float v[], int n){
    for (int i=0; i<n;i++){
        printf("Digite a nota %d/%d (0 a 20): ",i+1,n);
        scanf("%f", &v[i]);
    }
}
float somaVetor(float v[], int n){
    float soma=0;
    for(int i=0;i<n;i++){
        soma+=v[i];
    }
     return soma;
}
