#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void leVetor(float v[], int n);
void imprimeVetor(float v[], int n);
bool buscaVetor(float v[], int n, float valor);

int main() {
    setlocale(LC_ALL, "");

    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    float v[n];
    leVetor(v, n);

    // Verifica se há elementos repetidos no vetor
    for (int i = 0; i < n; i++) {
        float valorAtual = v[i];
        if (buscaVetor(v, i, valorAtual)) {
            printf("\nO valor %f está repetido no vetor.\n", valorAtual);
            i--;
            leVetor(&v[i + 1], 1);
        }
    }

    imprimeVetor(v, n);
    return 0;
}

void leVetor(float v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d/%d: ", i + 1, n);
        scanf("%f", &v[i]);
    }
}

void imprimeVetor(float v[], int n) {
    for (int i = 0; i < n; i++) {
        printf(" %f ", v[i]);
    }
}

bool buscaVetor(float v[], int n, float valor) {
    for (int i = 0; i < n; i++) {
        if (v[i] == valor) {
            return true;
        }
    }
    return false;
}
