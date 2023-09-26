/*
a->append, inserindo informação
fputs->passa vetor de caracteres
fputc->passa um unico caractere
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *file;
    file = fopen("string.txt","a");


    if(file== NULL){
        printf("Arquivo nao pode ser aberto!");
        getchar();//para pausar tela
        exit(1);
    }

    fprintf(file, "Kylian Mbappe\n");//passa string

    char frase[] = "Kevin De Bruyne";
    fputs(frase,file);

    char caractere = '3';
    fputc(caractere,file);

    fclose(file);

    system("pause");
    return 0;
}
