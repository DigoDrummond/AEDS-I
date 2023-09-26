/*
Data:24/05/2023
Lista exercícios, Assunto:Vetores
Ex: 2.10 , BUSA EM VETOR ALEATÓRIO
Aluno: Rodrigo Drummond Macedo. RA:802742
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int get_random_num(int limit);
void preencheVetor(int v[], int n);
int buscaValor(int v[], int n, int valor);
void imprimeVetor(int v[], int n);


int main() {
    srand(time(NULL));
    setlocale(LC_ALL, "");
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];
    preencheVetor(v, n);
    printf("\nNúmeros gerados");
    imprimeVetor(v,n);

    int opcao = 1;
    while (opcao == 1) {
        int valor;
        printf("\nDigite o valor a ser buscado: ");
        scanf("%d", &valor);

        int indice = buscaValor(v, n, valor);
        if (indice != -1) {
            printf("O valor %d foi encontrado no índice %d do vetor.\n", valor, indice);
        } else {
            printf("O valor %d não foi encontrado no vetor.\n", valor);
        }

        printf("Deseja buscar outro valor? (1-Sim / 0-Não): ");
        scanf("%d", &opcao);
    }

    return 0;
}
int get_random_num(int limit) {
    return (rand() % limit) + 1;
}

void preencheVetor(int v[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        v[i] = get_random_num(100);  // Gerando números aleatórios de 1 a 100
    }
}
void imprimeVetor(int v[], int n){
   for(int i=0;i<n;i++){
     printf(" %d ", v[i]);
   }
}
int buscaValor(int v[], int n, int valor) {
    int i, indice = -1;
    for (i = 0; i < n; i++) {
        if (v[i] == valor) {
            indice = i;
        }
    }
    return indice;
}
