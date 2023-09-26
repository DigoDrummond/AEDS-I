#include <stdio.h>
//fgets(onde dados da string lida serão armazenados,numero de caracteres,ponteiro(entrada)).
//stdin->standart input, entrada, dependendo do dispositivo não é o teclado que está como padrão, ex:mobile
//stdin: ponteiro do tipo FILE, informa que está lendo dados do usuário do teclado
//toda string termina com caractere nulo \0
int main(){

    char x[100];
    //FGETS
    fgets(x,100,stdin); //fgets vai ler dados do teclado, digitado, le n-1 caracteres, 1 reservado para colocar o nulo \0
    printf("%s", x);//imprime até o limite(100), função fgets ignora o que passa do limite de caracteres

    //FREOPEN
    freopen("arquivo1.txt", "r", stdin);//um parametro a mais que fopen, ultimo é ponteiro tipo FILE  redirecionado
    //redireciona stdin(ponteiro) para arquivo 1
    fgets(x,100,stdin);//essa chamada de stdin não pede para digitar, mas já vai direto em arquivo1, devido ao redirecionamento
    printf("%s", x);//printa digitado + dados ja existentes do arquivo


    return 0;
}
