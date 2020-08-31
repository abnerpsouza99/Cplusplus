#include <iostream>

using namespace std;

// Exercitando conceitos sobre "ponteiros"
int main(){

  string veiculo = "Carro";
  // Ponteiro armazenena o endereço de outra variável...
  string *pn;

  // Declaração de endereço da variável veiculo
  pn = &veiculo;
  cout << veiculo << "\n";
  
  // Desta maneira, estamos dizendo que deve-se adicionar "Moto", no valor da variável apontada pelo endereço do ponteiro.
  *pn = "Moto";
  cout << veiculo;

  return 0;
}