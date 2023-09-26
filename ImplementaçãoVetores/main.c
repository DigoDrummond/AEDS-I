#include <stdio.h>
#include <stdlib.h>
//Prototipos
void lerVetor(float v[], int n);
void imprimevetor(float v[], int n);
void imprimeVetorInvertido(float v[], int n);
float calc_media(float v[], int n,float *somaPtr);
void set_menor_maior(float v[], int n, int *imenor, float *menor, int *imaior, float *maior);
void imprimePotencia(float v[], int n);
void imprime(float soma, float media, int imenor, float menor, int imaior,float maior);

int main()
{
    int n, imenor, imaior;
    float soma, media, maior, menor;
    printf("Digite o tamanho do vetor: ");
    scanf("%i", &n);
    float v[n];
    //inicializa vetor
    lerVetor(v, n);
    printf("\n Elementos do vetor original\n");
    imprimevetor(v, n);

    media=calc_media(v, n, &soma);
    set_menor_maior(v, n, &imenor, &menor, &imaior, &maior);

    imprime(soma, media, imenor, menor, imaior, maior);
    printf("\nElementos do vetor original na ordem inversa");
    imprimeVetorInvertido(v, n);
    printf("\nPotência de 2, para numeros de indice par. Potencia de 3 para numeros de indice impar");
    imprimePotencia(v, n);


}
void lerVetor(float v[], int n){
    for(int i=0; i<n; i++){
        printf("\n valor %d/%d: ",i+1,n);
        scanf("%f", &v[i]);
    }
}
void imprimevetor(float v[], int n){
   for(int i=0; i<n; i++){
    printf(" %f ", v[i]);
   }
}
void imprimeVetorInvertido(float v[], int n){
   for(int i=n-1; i>=0;i--){
    printf(" %f ", v[i]);
   }
}
float calc_media(float v[], int n, float *somaPtr){
    float soma = 0;
   for( int i=0; i<n; i++){
       soma += v[i];
   }
   *somaPtr = soma; //atribui a soma ao endereço apontado por somaPtr
   return soma/n;
}
void set_menor_maior(float v[], int n, int *imenor, float *menor, int *imaior, float *maior){
     *maior = v[0];
     *menor = v[0];
     *imenor = 0;
     *imaior = 0;
    for(int i=1; i<n; i++){
        if (v[i] > *maior){
            *maior = v[i];
            *imaior = i;
        }
        if (v[i] < *menor){
            *menor = v[i];
            *imenor = i;
        }
    }
}
void imprimePotencia(float v[], int n){
   for( int i=0; i<n; i++){
        if (i % 2 == 0){  // índice par
            v[i] = pow(v[i],2);
         }else{  // índice ímpar
          v[i] = pow(v[i],3);
          }
          printf("\n %f ", v[i]);
   }
}
void imprime(float soma, float media, int imenor, float menor, int imaior, float maior){
    printf("\nImprime Maior e Menor elemento e seus indices:");
    printf("\n Maior indice = %d.\n Maior valor = %f. \n Menor indice = %d. \n Menor valor = %f",imaior,maior,imenor,menor);
    printf("\n A media é de %f e a soma e de %f",media,soma);
}

