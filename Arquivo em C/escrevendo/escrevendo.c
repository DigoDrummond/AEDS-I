/*
FILE->tipo de variável
*->ponteiro para apontar em tipos de dados file
fopen("caminho da área de trabalho(local)\nome do arquivo,"r,w,a")
r->ler arquivo
w->escrever no arquivo,escreve do inicio,apaga conteúdo já existente
a->alterar arquivo, escreve de onde parou
usar duas barras no caminho por \ ter propriedade esecial em c. ex: \n
colocar apenas nome do arquivo cria ele no diretório onde programa está
fprintf(ponteiro que recebe tipo de dados file,"mensagem")->escreve no arquivo


*/
#include <stdio.h>

int main(){

    FILE *file;//ponteiro que aponta em tipos de data file
    file = fopen("teste.txt","w");//função que faz com que ponteiro aponte para arquivo no programa, e abre arquivo
    fprintf(file,"teste123456");
    fclose(file);//fecha arquivo o qual ponteiro file aponta

    return 0;
}
