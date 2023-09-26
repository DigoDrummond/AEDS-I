#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
/* Retorna o Fibonacci de um n�mero conforme tabela acima, de forma recursiva */
int fib(int n);
/* Imprime a sequ�ncia Fibonacci de 1 at� n */
void imprime_seq_fib(int n);
/* MENU: Exibe as op��es de menu para o usu�rio (itens a, b, c) e armazena a op��o selecionada pelo usu�rio */
void menu(char *opcao);
/* Faz a entrada de dados */
void entrada(int *numero);
bool validaEntrada(int opcao,int numero);
bool verificaFibonacci(int n,int *posicao);

int main(){
    setlocale(LC_ALL, "");
    int n,posicao;
    char escolha;
    printf("-----Calculadora Fib -----");
    menu(&escolha);
    validaEntrada(escolha,n);
    if(!escolha){
        printf("Entrada inv�lida");
    }
     if(escolha && escolha=='a'){
        entrada(&n);
        printf("\n fib(%d) = %d",n,fib(n));
     }
     if(escolha && escolha=='b'){
         entrada(&n);
        imprime_seq_fib((n));
     }
     if(escolha && escolha=='c'){
         entrada(&n);
         if(verificaFibonacci(n, &posicao)){
            printf("\n%d est� na sequ�ncia de fibonacci, na posi��o %d",n,posicao);
         }
         else
            printf("%d n�o est� na sequ�ncia de fibonacci",n);
     }
}
int fib(int n){
     if(n<=1)
      return n;
     else
      return fib(n-1)+ fib(n-2);

}
void imprime_seq_fib(int n){
     for(int i=1 ;i<=n;i++){
        printf("\nfib(%d) = %d ",i,fib(i));
    }

}
void menu(char *opcao){
    printf("\nPara exibir o valor de um item da sequ�ncia, dado um valor de n, digite a");
    printf("\nPara imprimir toda a sequ�ncia Fibonacci at� uma determinada posi��o (valor de n), digite b");
    printf("\nPara descobrir se um valor est� na sequ�ncia Fibonacci e a sua posi��o, digite c");
    printf ("\nDigite a opcao escolhida: ");
    scanf(" %c",opcao);

}
void entrada( int *numero){
   printf("Digite n: ");
   scanf("%d", numero);
}
bool validaEntrada(int opcao,int numero){
   if (opcao=='a' && numero>=1 && numero <=20){
         return true;
   }
    else if (opcao=='b'&& numero>=1 && numero<=20 ){
         return true;
   }
    else if (opcao=='c' && numero>=1 && numero<=10000){
         return true;
   }
    else
      return false;

   }
bool verificaFibonacci(int n,int *posicao){
    int i=0;
    while(fib(i)<=n){
        if(fib(i)==n){
            *posicao=i++;
            return true;
        }
        i++;
    }
    return false;
}
