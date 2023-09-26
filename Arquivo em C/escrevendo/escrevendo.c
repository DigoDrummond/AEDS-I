/*
FILE->tipo de vari�vel
*->ponteiro para apontar em tipos de dados file
fopen("caminho da �rea de trabalho(local)\nome do arquivo,"r,w,a")
r->ler arquivo
w->escrever no arquivo,escreve do inicio,apaga conte�do j� existente
a->alterar arquivo, escreve de onde parou
usar duas barras no caminho por \ ter propriedade esecial em c. ex: \n
colocar apenas nome do arquivo cria ele no diret�rio onde programa est�
fprintf(ponteiro que recebe tipo de dados file,"mensagem")->escreve no arquivo


*/
#include <stdio.h>

int main(){

    FILE *file;//ponteiro que aponta em tipos de data file
    file = fopen("teste.txt","w");//fun��o que faz com que ponteiro aponte para arquivo no programa, e abre arquivo
    fprintf(file,"teste123456");
    fclose(file);//fecha arquivo o qual ponteiro file aponta

    return 0;
}
