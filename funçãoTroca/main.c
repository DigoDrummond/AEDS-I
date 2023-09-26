#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void entrada(float *a,float *b,float *c);
void troca(float *a,float *b);
void ordena(float *a,float *b,float *c);
float calc_media(float a,float b,float c);

int main(){
    setlocale(LC_ALL, "");
    float a,b,c,media;
    entrada(&a,&b,&c);
    ordena(&a,&b,&c);
    printf("Os n�meros s�o %f, %f e %f",a,b,c);
    media=calc_media(a,b,c);
    printf("\nA m�dia entre eles � de : %f",media);
}
void entrada(float *a,float *b,float *c){
    printf("Digite um n�mero: ");
    scanf("%f", a);
    printf("Digite um n�mero: ");
    scanf("%f", b);
    printf("Digite um n�mero: ");
    scanf("%f", c);
}
void troca(float *a,float *b){
   int aux=*a;
   *a=*b;
   *b=aux;
}
void ordena(float *a,float *b,float *c ){
    if(*a>*b)
        troca(a,b);
    if(*a>*c)
        troca(a,c);
    if(*b>*c)
        troca(b,c);
}
float calc_media(float a,float b,float c ){
    return (a+b+c)/3;
}
