#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void entrada (float *n);
float fat(float n);

int main(){
  setlocale(LC_ALL,"");
  float num,fatorial;
  printf("Calcula o fatorial de um n�mero");
  entrada(&num);
  fatorial=fat(num);
  printf("\nO fatorial de %f � %f ",num,fatorial);
}
float fat(float n){
  if (n==1)
    return 1;
  else
    return (n*fat(n-1));
}
void entrada(float *n){
   printf("\nDigite um n�mero: ");
   scanf("%f", n);
}
