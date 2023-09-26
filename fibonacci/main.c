#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 void entrada(int *n);
 int  fib(int n);
int main(){
    setlocale(LC_ALL,"");
    int num,i;
      entrada(&num);
    for(i=1;i<=num;i++){
        printf(" %d ",fib(i));
    }
return 0;
}
int fib(int n){
    int x;
    if(n==1)
        return 1;
    if(n==2)
        return 1;
    else
      x=fib(n-1) + fib(n-2);
        return x;

}
void entrada(int *n){
  printf("Digite o número de termos da sequência: ");
  scanf("%d", n);
}
