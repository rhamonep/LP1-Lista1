#include <iostream>
#include "Pessoa.h"

using namespace std;

int main(){
  Pessoa pessoa1 = Pessoa("Rodrigo");
  Pessoa pessoa2 = Pessoa("Gustavo", 31, "9999-9999");
  Pessoa pessoa3 = Pessoa("Leandro");

  pessoa1.setTelefone("8888-8888");
  pessoa1.setIdade(21);

  pessoa1.exibir();
  pessoa2.exibir();
  pessoa3.exibir();

  return 0;
}
