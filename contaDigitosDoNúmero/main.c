#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int numDigitos(int n);

int main(){
    setlocale(LC_ALL, "");
     int n,total;
      printf("Digite um n�mero: ");
      scanf("%d", &n);
      total=numDigitos(n);
      printf("\nO total de digitos do n�mero %d � %d",n,total);
        return 0;
}

int numDigitos(int n){
    int cont=0;
    if(n!=0){
     cont++;
     cont += numDigitos(n/10);
    }
     return cont;

}
