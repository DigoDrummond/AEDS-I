#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

void qqrbaseMen10_base10(int num, int base);
void base10_qqrbase(int num, int base);
int conta_digito(int valor);
void arruma_vet(int v[]);
void aloca_vet(int num, int v[], int count);
void imprime_vet(int v[], int n);
void saida_hexadecimal(int num);
void base10_qqrbase_fracionaria(float num, int base);
void qqrbaseMai10_base10(char num[]);
void qqrbaseMen10_base10_fracionaria(float num, int base);
// void qqrbaseMai10_base10_fracionaria(char num[], int base);
int conta_digito_fracionario(float num);

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int menu, i = 1, entrada_int, base;
    float entrada;
    int continuar;
    int possui_fracionaria = 0;
    do
    {
        // MENU
        printf("Qualquer base pra base 10(digite 1).\nBase 10 para qualquer base(digite2)\nOpção: ");
        scanf("%i", &menu);
        if (menu == 1)
        {
            printf("\nDigite a base do seu número: ");
            scanf("%i", &base);
            if (base > 10)
            {
                char entradaChar[100];
                printf("\nDigite o número para mudança de base: ");
                scanf("%s", entradaChar);
                printf("\nResultado: ");
                qqrbaseMai10_base10(entradaChar);
                // if(entrada != 0)
                // qqrbaseMai10_base10_fracionaria(entradaChar, base);
            }
            else
            {
                printf("\nDigite o número para mudança de base: ");
                scanf("%f", &entrada);
                entrada_int = entrada;
                entrada -= (int)entrada;
                printf("\nResultado: ");
                qqrbaseMen10_base10(entrada_int, base);
                if (entrada != 0)
                    qqrbaseMen10_base10_fracionaria(entrada, base);
            }
        }
        if (menu == 2)
        {
            printf("\nDigite o número para mudança de base: ");
            scanf("%f", &entrada);
            entrada_int = entrada;
            entrada -= entrada_int;
            printf("\nDigite a base para qual o número sera passado:");
            scanf("%i", &base);
            printf("\nResultado: ");
            base10_qqrbase(entrada_int, base);
            if (entrada != 0)
                base10_qqrbase_fracionaria(entrada, base);
        }
        printf("\nDeseja digitar outro número?(Sim(1) ou Não(0)): ");
        scanf("%d", &continuar);
        printf("\n");
    } while (continuar == 1);
    return 0;
}

void base10_qqrbase(int num, int base)
{
    // passa da base 10 para qqr base com recursividade
    if (num / base > 0)
        base10_qqrbase(num / base, base);
    if (num % base < 10)
        printf("%i", num % base);
    else
        saida_hexadecimal(num % base);
}

void base10_qqrbase_fracionaria(float num, int base)
{
    printf(",");
    int vet[5], i = 0;
    while (i < 5 || num > 0)
    {
        num *= base;
        vet[i] = (int)num;
        num -= (int)num;
        i++;
    }
    imprime_vet(vet, i);
}

void qqrbaseMen10_base10(int num, int base)
{ // passa de qqr base para base 10 por vetor
    int count = conta_digito(num);
    int resultado = 0, vet[count];
    aloca_vet(num, vet, count);
    for (int i = 0; i < count; i++)
    {
        vet[i] = vet[i] * pow(base, i);
    }
    for (int i = 0; i < count; i++)
        resultado += vet[i];
    printf("%i", resultado);
}

void qqrbaseMai10_base10(char num[])
{
    int valor = 0;
    int base = 1;
    int tamanho = strlen(num); // retorna comprimento da string
    for (int i = tamanho - 1; i >= 0; i--)
    {
        if (num[i] >= '0' && num[i] <= '9')
            valor += (num[i] - '0') * base;
        else if (num[i] >= 'A' && num[i] <= 'F')
            valor += (num[i] - 'A' + 10) * base;
        else if (num[i] >= 'a' && num[i] <= 'f')
            valor += (num[i] - 'a' + 10) * base;
        base *= 16;
    }
    printf("%d", valor);
}

int conta_digito(int valor)
{ // conta os digitos para o vetor
    int cont = 0;
    do
    {
        cont += 1;
        valor = valor / 10;
    } while (valor != 0);
    return cont;
}

void aloca_vet(int num, int v[], int count)
{ // aloca um número inteiro em um vetor
    int i = 0;
    do
    {
        v[i] = num % 10;
        num = num / 10;
        i++;
    } while (i < count);
}

void imprime_vet(int v[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%i", v[i]);
}

void saida_hexadecimal(int num)
{
    switch (num)
    {
    case 10:
        printf("A");
        break;
    case 11:
        printf("B");
        break;
    case 12:
        printf("C");
        break;
    case 13:
        printf("D");
        break;
    case 14:
        printf("E");
        break;
    case 15:
        printf("F");
        break;
    }
}

/*void qqrbaseMai10_base10_fracionaria(char num[], int base){
  float resultado = 0.0;
  //base decimal = 1/base. //base elevado a menos 1
  float base_decimal = 1.0 / base;//primeira potencia negativa da base
  int tamanho = strlen(num);

  for (int i = 0; i <tamanho; i++) {
      if (num[i] >= '0' && num[i] <= '9')
            resultado += (num[i] - '0') * base_decimal;
       else if (num[i] >= 'A' && num[i] <= 'F')
            resultado += (num[i] - 'A' + 10) * base_decimal;
       else if (num[i] >= 'a' && num[i] <= 'f')
            resultado += (num[i] - 'a' + 10) * base_decimal;
        base_decimal /= base; //base elevada a -x
    }
  printf("\n%f", resultado);
}*/

void qqrbaseMen10_base10_fracionaria(float num, int base)
{
    printf(",");
    int count = conta_digito_fracionario(num);
    int vet[count], resultado = 0;
    for (int i = 0; i < count; i++)
    {
        vet[i] = num * 10;
        num *= 10;
    }
    for (int i = 1; i <= 5; i++)
        vet[i] *= pow(base, -i);
    for (int i = 0; i < 5; i++)
        resultado += vet[i];
    printf("%d", resultado);
}
int conta_digito_fracionario(float num)
{
    int count = 0;
    while (num != 0)
    {
        num *= 10;
        num -= (int)num;
        count++;
    }
    return count;
}
