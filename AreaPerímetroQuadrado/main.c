#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void entrada (float *lado);
float calc_perimetro(float lado);
float calc_area (float lado);

int main()
{
    setlocale(LC_ALL, "");
    float lado,area,perimetro;
    entrada(&lado);
    area=calc_area(lado);
    perimetro=calc_perimetro(lado);
    printf("A área do quadrado é %f e o perímetro é %f",area,perimetro);

}
void entrada (float *lado){
    printf("Digite o tamanho do lado do quadrado: ");
    scanf("%f", lado);
}
float calc_perimetro(float lado){
    return lado*4;
}
float calc_area(float lado){
    return lado*lado;
}
