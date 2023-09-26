/*
fgets(variavel,tamanho variavel, ponteiro que aponta para FILE)->file get string
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *file;
    file = fopen("string.txt", "r");//se fun��o nao executar papel dela(arquivo n�o existir), ponteiro ser� nulo

    if(file == NULL){//controle do programa, fecha se arquivo n�o existir
        printf("Arquivo nao pode ser aberto.\n");
        getchar();//somente para deixar mensagem na tela, mas na realidade funciona como scanf
        exit(0);//fecha o programa
    }
    char frase[100];

    while(fgets(frase,100,file) != NULL){//enquanto retorno for diferente de nda, continua sendo executado, ou seja , at� acabar de ler texto dispon�vel
        printf("%s", frase);
    }
    fclose(file);

    printf("\n");
    system("pause");
    return 0;
}
