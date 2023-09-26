#include <iostream>

// Fun��o para solicitar a entrada do n�mero de termos da sequ�ncia
void entrada(int& n) {
  std::cout << "Digite o n�mero de termos da sequ�ncia: ";
  std::cin >> n;
}

// Fun��o para calcular o n-�simo termo da sequ�ncia de Fibonacci
int fib(int n) {
  if (n == 1 || n == 2)
    return 1;
  else
    return fib(n - 1) + fib(n - 2);
}

int main() {
  // Configura��o para imprimir caracteres acentuados corretamente
  setlocale(LC_ALL, "");

  int num;
  entrada(num); // Chama a fun��o para obter o n�mero de termos da sequ�ncia

  for (int i = 1; i <= num; i++) {
    std::cout << " " << fib(i) << " ";
  }

  return 0;
}

