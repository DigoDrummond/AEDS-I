#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void entrada (float *a,float *b);
float incrementaDecrementa(float *a,float *b);

int main()
{
    setlocale(LC_ALL, "");
    float a,b;
    entrada(&a,&b);
    incrementaDecrementa(&a,&b);
    printf("%f %f ",a,b);

}
void entrada (float *a,float *b){
    printf("Digite um número: ");
    scanf("%f", a);
    printf("Digite um número: ");
    scanf("%f", b);

}
float incrementaDecrementa(float *a,float *b){
        (*a)++;
        (*b)--;
}
