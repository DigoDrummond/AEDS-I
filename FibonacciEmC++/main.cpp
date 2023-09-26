#include <iostream>

// Função para solicitar a entrada do número de termos da sequência
void entrada(int& n) {
  std::cout << "Digite o número de termos da sequência: ";
  std::cin >> n;
}

// Função para calcular o n-ésimo termo da sequência de Fibonacci
int fib(int n) {
  if (n == 1 || n == 2)
    return 1;
  else
    return fib(n - 1) + fib(n - 2);
}

int main() {
  // Configuração para imprimir caracteres acentuados corretamente
  setlocale(LC_ALL, "");

  int num;
  entrada(num); // Chama a função para obter o número de termos da sequência

  for (int i = 1; i <= num; i++) {
    std::cout << " " << fib(i) << " ";
  }

  return 0;
}

