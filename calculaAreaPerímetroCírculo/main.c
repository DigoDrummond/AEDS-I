#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
void entrada (float *raio);
float calc_area(float raio);
float calc_perimetro(float raio);

int main()
{
    setlocale(LC_ALL, "");
    float raio,perimetro,area;
    entrada(&raio);
    area=calc_area(raio);
    printf("A �rea da circunfer�ncia � de %f",area);
    perimetro=calc_perimetro(raio);
    printf("\nO per�metro da circunfer�ncia � de %f",perimetro);

}
void entrada (float *raio){
    printf("Digite o raio da circunfer�ncia: ");
    scanf("%f", raio);
}
float calc_perimetro(float raio){
    return 2 * 3.14 * raio;
}
float calc_area(float raio){
    return 3.14 * pow(raio,2);
}
