#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
//Protótipo
//int calcDelta(float a, float b, float c);
int calcDelta();
int calcRaiz(float a, float b,float *x1,float *x2);


//main
int main(){
    setlocale(LC_ALL, "Portuguese");
     float a,b,c,x1,x2;
     float delta;

        printf("Digite a: ");
        scanf("%f", &a);
        printf("Digite b: ");
        scanf("%f", &b);
        printf("Digite c: ");
        scanf("%f", &c);

    //delta=calcDelta(a,b,c);

    calcRaiz(a,b,c,&x1,&x2);
    printf("As raízes são %f e %f",x1,x2);

      return 0;


}
//Implementação
int calcDelta() {
  return (b*b)-*(4*a*c)
  }

//int calcDelta(float a, float b, float c){
  //return (b*b) - (4*a*c);
//}

int calcRaiz(float a, float b, float *x1,float *x2){
    int d;
    d=calcDelta(a,b,c);
    x1=(-b + sqrt(d)) / (2*a);
    x2=(-b - sqrt(d)) / (2*a);
}


