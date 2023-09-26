/*
fscanf(nome arquivo, comandos scanf)->escaneia dados de um arquivo
caso o arquivo que vc queira ler nn exista, le lixos de mem�ria, nesse caso das vari�veis x,y,z.
tamb�m pode impriir lixos de mem�ria se fscanf for imcompat�vel com dados do txt(ex:%d para ler string)
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *file;
    file = fopen("numeros.txt", "r");//se fun��o nao executar papel dela(arquivo n�o existir), ponteiro ser� nulo

    if(file == NULL){//controle do programa, fecha se arquivo n�o existir
        printf("Arquivo nao pode ser aberto\n");
        system("pause");
        return 0;
    }

    int x,y,z;
    fscanf(file, "%i %i %i", &x, &y, &z);
    printf("%i %i %i\n", x, y, z);

    fclose(file);

    system("pause");
    return 0;
}
