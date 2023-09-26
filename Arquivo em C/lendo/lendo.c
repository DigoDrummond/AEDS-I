/*
fscanf(nome arquivo, comandos scanf)->escaneia dados de um arquivo
caso o arquivo que vc queira ler nn exista, le lixos de memória, nesse caso das variáveis x,y,z.
também pode impriir lixos de memória se fscanf for imcompatível com dados do txt(ex:%d para ler string)
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *file;
    file = fopen("numeros.txt", "r");//se função nao executar papel dela(arquivo não existir), ponteiro será nulo

    if(file == NULL){//controle do programa, fecha se arquivo não existir
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
