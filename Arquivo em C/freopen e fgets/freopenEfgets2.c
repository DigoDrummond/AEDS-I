#include <stdio.h>

int main(){

    char x[100];

    FILE *file  = fopen("arquivo1.txt", "r");

    fgets(x,100,file);
    printf("%s\n", x);

    freopen("arquivo2.txt", "r", file);//redireciona ponteiro tipo FILE para arquivo2.txt
    fgets(x,100,file);
    printf("%s\n", x);

    return 0;
}
